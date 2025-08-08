<?php

/*
17. Remova "yt" do Índice 1

Escreva um programa em PHP para verificar se a string 'yt' aparece no índice 1 de uma determinada string. 
Se aparecer, retorne uma string sem 'yt'; caso contrário, retorne a string original.
*/

function test($s) 
{
   return substr($s, 1, 2) == "yt" ? substr($s, 0, 1).substr($s, 3, strlen($s)-2) : $s;
}

echo test("Python")."\n";
echo test("ytade")."\n";
echo test("jsues")."\n";
?>