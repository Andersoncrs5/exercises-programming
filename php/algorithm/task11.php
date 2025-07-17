<?php

// 11. Add First 3 Characters Front and Back
// Write a PHP program to create a new string taking the first 3 characters of a given string and 
// return the string with the 3 characters added at both the front and back. If the given string 
// length is less than 3, use whatever characters are there.

function test(string $word)
{
    if (strlen($word) < 3 ) 
    {
        return $word . $word . $word;
    }

    $f_char = substr($word,0,3);

    return $f_char . $word . $f_char;
}

echo test("Python") . PHP_EOL;
echo test("JS"). PHP_EOL;