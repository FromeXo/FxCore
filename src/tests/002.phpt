--TEST--
test1() Basic test
--EXTENSIONS--
fxcore
--FILE--
<?php
$ret = test1();

var_dump($ret);
?>
--EXPECT--
The extension fxcore is loaded and working!
NULL
