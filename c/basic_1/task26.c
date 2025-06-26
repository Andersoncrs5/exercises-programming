/*
    Print all even numbers between 1 and 50

    Write a C program that prints all even numbers between 1 and 50 (inclusive).
*/

#include <stdio.h>

int main(){

    int i;

    for (i = 1; i <= 50; i++) 
    {
        if(i%2 == 0) 
        {
            printf("Value %d is even!!\n", i);
        }
    }


    return 0;
}