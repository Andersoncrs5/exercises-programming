<?php

function test_(int $num, int $num1) 
{
    return $num >= 100 && $num <= 200 || $num1 >= 100 && $num1 <= 200;
}

var_dump(test_(100, 199));
var_dump(test_(250, 300));
var_dump(test_(105, 190));