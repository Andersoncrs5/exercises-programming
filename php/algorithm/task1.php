<?php

// 1. Sum Triple if Same

// Write a PHP program to compute the sum of the two given integer values. If the two values are 
// the same, then returns triple their sum.

function sum(int $num, int $num2)
{
    if ($num == $num2){return ($num + $num2) * 3;}
    return $num + $num2;
}

echo sum(1,1) . "\n" ;
echo sum(1,12) . "\n" ;
echo sum(1,8) . "\n" ;
echo sum(1,0) . "\n" ;
