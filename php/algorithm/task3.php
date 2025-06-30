<?php

//3. Check for 30 or Sum is 30:

//Write a PHP program to check 
//two given integers, and return true if one of them is 30 or if their sum is 30.

function check(int $n1, int $n2): bool
{
    if ($n1 == 30 || $n2 == 30 || ($n1 + $n2) == 30 ){ return true; }

    return false;
}

echo check(30, 0) . "\n";
echo check(25, 5) . "\n";
echo check(20, 30) . "\n";