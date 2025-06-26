/*
Print squares of all even numbers up to a given value

Write a C program to find and print the square of all the even values from 1 to a specified value.
*/

#include <stdio.h>


int main(){
    int limit;

    printf("Input the limit value: ");
    scanf("%d", &limit);

    if (limit > 10000)
    {
        printf("The limit value max is 10000\n");
        return 0;
    }

    for (int i = 1; i <= limit; i++) {
        if (i % 2 == 0)
        {
            printf("%d * %d is %d \n",i,i, (i * i));
        }
    }

    return 0;
}