<?php

/*
10. Check Multiple of 3 or 7

Write a PHP program to check if a given positive number is a multiple of 3 or a multiple of 7.
*/

function test(int $n) 
{
    return $n % 3 == 0 || $n % 7 == 0;
}

var_dump(test(3));
var_dump(test(14));
var_dump(test(12));
var_dump(test(37));

?>
