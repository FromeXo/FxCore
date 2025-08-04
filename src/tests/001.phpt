--TEST--
Check if fxcore is loaded
--EXTENSIONS--
fxcore
--FILE--
<?php
echo in_array('fxcore', get_loaded_extensions(), true) ? 'Pass' : 'Fail';
?>
--EXPECT--
Pass
