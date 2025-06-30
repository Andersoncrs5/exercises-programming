<?php
/*
7. Exchange First and Last Characters

Write a PHP program to exchange the first and last characters 
in a given string and return the new string.
*/

function check(string $w): string
{
    return substr($w, strlen($w) -1) . substr($w, 1, strlen($w) - 2) . substr($w, 0, 1);
}

echo var_dump(check("abcdef"));
echo var_dump(check("ab"));