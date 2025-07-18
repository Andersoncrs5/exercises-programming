<?php 

function check(int $n1, int $n2) 
{
    return ($n1 >= 20 && $n1 <= 50) || ($n2 >= 20 && $n2 <= 50);
}

var_dump(check(20, 84));
var_dump(check(14, 50));
var_dump(check(11, 45));
var_dump(check(25, 40));
var_dump(check(10, 19));