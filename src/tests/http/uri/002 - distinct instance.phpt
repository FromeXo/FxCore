--TEST--
Check if methods returns a clone of the object instead of $this.
--EXTENSIONS--
fxcore
--FILE--
<?php
$pass = true;
$methods = [
    'withScheme' => ['https']
];

foreach ($methods as $method => $argVal) {
    $obj = new FxCore\Http\Uri();
    $new = call_user_func_array([$obj, $method], $argVal);
    if ($obj === $new) {
        $pass = false;
        break;
    }

}
echo $pass ? 'Pass' : 'Fail';
?>
--EXPECT--
Pass
