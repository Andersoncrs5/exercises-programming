<?php

/*
18. O maior dos três inteiros

Escreva um programa PHP para verificar o maior número entre três inteiros fornecidos.
*/

function check(int $x, int $y, int $z) {
    return max($x, max($y, $z));
}

echo check(1,2,3) . PHP_EOL;
echo check(1,3,2) . PHP_EOL;
echo check(1,1,1) . PHP_EOL;