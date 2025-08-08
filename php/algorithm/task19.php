<?php

function check(int $x, int $y) : int
{
   $n = 100;
   
   $val = abs($x - $n);   
   $val2 = abs($y - $n);
   
   return $val == $val2 ? 0 : ($val < $val2 ? $x : $y);
}

echo check(78, 95).PHP_EOL;
echo check(95, 95).PHP_EOL;
echo check(99, 70).PHP_EOL;
?>
