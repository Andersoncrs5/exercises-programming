/*
Count positive and negative numbers in 5 inputs

Write a C program that reads 5 numbers and counts the number of positive numbers and negative numbers.
*/

#include <stdio.h>

int main(){
    int num[5], total_positive, total_negative;

    printf("Input the value of n1: ");
    scanf("%d", &num[0]);

    printf("Input the value of n2: ");
    scanf("%d", &num[1]);

    printf("Input the value of n3: ");
    scanf("%d", &num[2]);

    printf("Input the value of n4: ");
    scanf("%d", &num[3]);

    printf("Input the value of n5: ");
    scanf("%d", &num[4]);

    for (int i = 0; i < 5;i++) 
    {
        if (num[i] > 0) 
        {
            total_positive++;
        }
        else 
        {
            total_negative++;
        }
    }

    printf("\nNumber of positive numbers: %d", total_positive);
    printf("\nNumber of negative numbers: %d\n", total_negative);

    return 0;
}