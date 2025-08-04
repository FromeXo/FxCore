--TEST--
Check if withScheme throws InvalidArgumentException.
--EXTENSIONS--
fxcore
--FILE--
<?php

$secondException = true;
try {
    // First character must be alphabetic (ALPHA = a-z or A-Z).
    $obj = new FxCore\Http\Uri();
    $obj->withScheme('.scheme');
}
catch (InvalidArgumentException $e) {
    // Subsequent characters can be [ALPHA, DIGIT, +, -, .].
    try {
        $obj2 = new FxCore\Http\Uri();
        $obj2->withScheme('htt%p');
    }
    catch (InvalidArgumentException $e) {
        echo 'Pass';
    }
    catch (Exception $e) {
        echo 'Fail';
    }
}
catch (Exception $e) {
    echo 'Fail';
}
?>
--EXPECT--
Pass
