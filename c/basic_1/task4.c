/*
    Task 3:
    Write a C program to print the following characters in reverse.
*/

#include <stdio.h>

int main() {
    char a = 'a';
    char b = 'b';
    char c = 'c';

    printf("Normal string: %c%c%c\n", a,b,c);
    printf("reverse string: %c%c%c\n", c,b,a);
    
    return 0;
}