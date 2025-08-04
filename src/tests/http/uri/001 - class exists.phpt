--TEST--
Check if FxCore\Http\Uri is registered.
--EXTENSIONS--
fxcore
--FILE--
<?php
echo class_exists('FxCore\Http\Uri') ? 'Pass' : 'Fail';
?>
--EXPECT--
Pass
