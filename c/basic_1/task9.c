/*
Calculate sum of two integers

Write a C program that accepts two integers from the user and calculates the sum of the two integers.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int n1, n2;

    printf("Input value of num 1\n");
    scanf("%d", &n1);
    printf("Input value of num 2\n");
    scanf("%d", &n2);

    printf("The sum of values %d and %d is %d\n", n1, n2, (n1 + n2));

    return 0;
}