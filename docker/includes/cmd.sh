#!/usr/bin/env bash

# Script variables.
readonly SCRIPT_VERSION="1.0.0"
readonly SCRIPT_PATH=$(realpath "$0")
readonly SCRIPT_FILE=${SCRIPT_PATH##*/}
readonly SCRIPT_DIR=${SCRIPT_PATH%/*}

readonly START_CMD="php -S 0.0.0.0:80 -t /php/server"
readonly WATCH_DIR="/php/php-debug/lib/php/extensions"

function kill_server() {
    # Retrieve PIDs of running php processes
    local pids
    pids=$(ps -C php -o pid= | xargs)
    if [[ -n "$pids" ]]; then
        for pid in $pids; do
            if [[ "$pid" =~ ^[0-9]+$ ]]; then
                echo "${SCRIPT_FILE} - Killing PHP server with PID ${pid}"
                kill -SIGTERM "$pid" 2>/dev/null
                # Wait for the process to terminate with a timeout
                timeout 5s tail --pid="$pid" -f /dev/null 2>/dev/null
            fi
        done
    fi
    return 0
}

function start_server() {
    # Check for existing PHP processes
    local lookup
    lookup=$(ps -C php -o pid= | xargs)
    if [[ -n "$lookup" ]]; then
        kill_server
    fi
    echo "${SCRIPT_FILE} - Starting PHP server..."
    $START_CMD &
    sleep 1  # Give the server a moment to start
}

function cleanup() {
    echo "${SCRIPT_FILE} - Received SIGTERM, shutting down gracefully..."
    kill_server
    # Kill inotifywait processes that are children of this script
    pkill -P $$ inotifywait 2>/dev/null
    echo "${SCRIPT_FILE} - Shutdown complete."
    exit 0
}

# Set up trap for SIGTERM
trap cleanup SIGTERM

# Start the server initially
start_server

# Monitor directory for changes
inotifywait -m -r -e modify,create,delete "$WATCH_DIR" | while read -r path event file; do
    echo "${SCRIPT_FILE} - Detected change in $path$file ($event), restarting server..."
    kill_server
    start_server
done