<?php

/*
20. Check Integers in Range 40..50 or 50..60

Write a PHP program to check whether two given integers are in the range 40..50 inclusive, 
or they are both in the range 50..60 inclusive.
*/
function test($x, $y) : bool
{
    $condition1 = ($x >= 40 && $x <= 50 && $y >= 40 && $y <= 50);    

    $condition2 = ($x >= 50 && $x <= 60 && $y >= 50 && $y <= 60);
    
    return $condition1 || $condition2;
}

var_dump(test(78, 95));
var_dump(test(25, 35));
var_dump(test(40, 50));
var_dump(test(55, 60));