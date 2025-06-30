<?php

//4. Within 10 of 100 or 200

//Write a PHP program to check a given integer and return true if it is within 10 of 100 or 200.

function check(int $n1): bool
{
    if (abs($n1 - 100) <= 10 || abs($n1 - 200) <= 10)
    {
        return true;
    }

    return false;
}

var_dump(check(103));

var_dump(check(90));

var_dump(check(89));
