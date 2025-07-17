<?php

// 12. Check if String Starts with "C#"
// Write a PHP program to check if a given string starts with 'C#' or not.

function test_word(string $word)
{
    $result = substr($word, 0, 2);
    if ($result == "C#" || $result == "c#") 
    {
        echo "Word begin with C#" . PHP_EOL;
    }
    else 
    {
        echo "Word not begin with C#" . PHP_EOL;
    }
}

test_word("java");
test_word("C#");
test_word("javasript");
test_word("rust");
test_word("golang");