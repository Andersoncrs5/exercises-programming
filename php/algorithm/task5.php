<?php
/*
5. Prepend 'if' to String if Missing

Write a PHP program to create a new string where 'if' is added to the front 
of a given string. If the string already begins with 'if', return the string unchanged.
*/

function check(string $w) : string
{
    return substr($w, 0, 2) == "if"? $w : "if " . $w;
}

echo var_dump(check("if else"));
echo var_dump(check("else"));
echo var_dump(check("if"));
