<?php

// 2. Absolute Difference with Triple

// Write a PHP program to get the absolute difference between n and 51. If n is greater than 51
// return triple the absolute difference.

function test($n) 
{
    $x = 51;
    if ($n > $x){ return ($n - $x) * 3; }

    return $x - $n;
}
echo test(34) . "\n";
echo test(94) . "\n";
echo test(12) . "\n";
?>
