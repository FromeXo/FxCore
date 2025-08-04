--TEST--
Check if FxCore\Http\Uri has methods
--EXTENSIONS--
fxcore
--FILE--
<?php
$classMethods = get_class_methods('FxCore\\Http\\Uri');
$pass = (count($classMethods) > 0);
$methods = [
    '__construct',
    'getScheme', 'getAuthority', 'getUserInfo', 'getHost', 'getPort', 'getPath', 'getQuery', 'getFragment',
    'withScheme', 'withUserInfo', 'withHost', 'withPort', 'withPath', 'withQuery', 'withFragment',
    '__toString'];

foreach(get_class_methods('FxCore\\Http\\Uri') as $method) {
    if ( ! in_array($method, $methods) ) {
        $pass = false;
        break;
    }
}
echo $pass ? 'Pass' : 'Fail';
?>
--EXPECT--
Pass
