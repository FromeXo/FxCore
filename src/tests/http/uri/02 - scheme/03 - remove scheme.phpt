--TEST--
Check if an empty scheme is equivalent to removing the scheme. (Also, if no scheme is present getScheme return an empty string.)
--EXTENSIONS--
fxcore
--FILE--
<?php
$obj = new FxCore\Http\Uri();
$new = $obj->withScheme('https');
if ($new->getScheme() !== 'https') {
    echo 'Fail';
}
if ($new->withScheme('')->getScheme() === '') {
    echo 'Pass';
}
else {
    echo 'Fail';
}
?>
--EXPECT--
Pass
