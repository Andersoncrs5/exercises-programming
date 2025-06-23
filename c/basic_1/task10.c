/*
Calculate product of two integers

Write a C program that accepts two integers from the user and calculates 
the product of the two integers.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1, n2, result;

    printf("Input value n1\n");
    scanf("%d", &n1);
    printf("Input value n2\n");
    scanf("%d", &n2);

    result = n1 * n2;

    printf("Product of the above two integers = %d\n", result);

    return 0;
}