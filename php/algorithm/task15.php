<?php 

function check(int $n1, int $n2, int $n3) 
{
    return ($n1 >= 20 && $n1 <= 50) || ($n2 >= 20 && $n2 <= 50) || ($n3 >= 20 && $n3 <= 50);
}

var_dump(check(11,20,12));
var_dump(check(30, 30, 17));
var_dump(check(25, 35, 50));
var_dump(check(15, 12, 8));