<?php
/*
9. Add Last Character at Front and Back

Write a PHP program to create a new string with the last char 
added at the front and back of a given string of length 1 or more.
*/

function check(string $str) 
{
    $s = substr($str, strlen($str) - 1);
    
    return $s . $str . $s;
}

echo var_dump(check("red"));
echo var_dump(check("abcdef"));
echo var_dump(check("js"));
echo var_dump(check("c#"));