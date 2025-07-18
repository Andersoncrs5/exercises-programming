<?php 

function name(float $temp, float $temp1): bool
{
    return $temp < 0 && $temp1 > 100 || $temp1 < 2 && $temp > 100;
}

var_dump(name(120, -1));
var_dump(name(-1, 120));
var_dump(name(2, 120));