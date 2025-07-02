/*
Check if an integer is positive/negative and even/odd

Write a C program to check whether a given integer is positive
even, negative even, positive odd or negative odd. Print even if the number is 0.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int *num = (int *)malloc(sizeof(int));

    printf("Input number value: ");
    scanf("%d", &*num);

    if (*num > 0 && *num % 2 == 0 )
    {
        printf("Value %d is even and positive\n", *num);
    }

    if (*num < 0 && *num % 2 == 0 )
    {
        printf("Value %d is even and negative\n", *num);
    }

    if (*num > 0 && *num % 2 != 0 )
    {
        printf("Value %d is odd and positive\n", *num);
    }

    if (*num < 0 && *num % 2 != 0 )
    {
        printf("Value %d is odd and negative\n", *num);
    }

    free(num);

    return 0;
}