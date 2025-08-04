--TEST--
Check if getScheme and withScheme can handle case-insensitive. (and getScheme returns lowercase.)
--EXTENSIONS--
fxcore
--FILE--
<?php
$pass = true;
$obj = new FxCore\Http\Uri();
$testValues = [
    'http' => 'hTtP',
    'https' => 'hTTpS',
    'ftp' => 'FtP',
    'sftp' => 'sFtP',
    'mailto' => 'MaIlTo',
    'file' => 'FiLe',
    'data' => 'dAtA',
    'tel' => 'TeL',
    'urn' => 'UrN'
];

foreach($testValues as $retVal => $argVal) {
    $clone = $obj->withScheme($argVal);
    if ($clone->getScheme() !== $retVal) {
        $pass = false;
        break;
    }
}
echo $pass ? 'Pass' : 'Fail';
?>
--EXPECT--
Pass
