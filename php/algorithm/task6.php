<?php

/*
    6. Remove Character at Given Position

    Write a PHP program to remove the character in a given position of a given string. 
    The given position will be in the range 0..string length -1 inclusive.
*/

function check(string $w, int $p) 
{
    return substr($w, 0, $p) . substr($w, $p + 1, strlen($w) - $p);

}

echo var_dump(check("Python", 1));
echo var_dump(check("Python", 0));
echo var_dump(check("Python", 4));