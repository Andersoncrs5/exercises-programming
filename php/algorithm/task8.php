<?php
/*
8. Four Copies of First 2 Characters

Write a PHP program to create a new string which is 4 copies of the 2 front characters 
of a given string. If the given string length is less than 2 return the original string.
*/

function check(string $w): string
{
    return substr($w, 0, 2) . substr($w, 0, 2) . substr($w, 0, 2) . substr($w, 0, 2);
}

echo var_dump(check("abcdef"));
echo var_dump(check("js"));
echo var_dump(check("c#"));
