/*
Count positives and calculate their average from 5 inputs

Write a C program that reads 5 numbers, counts the number of positive numbers, 
and prints out the average of all positive values.
*/

#include <stdio.h>

int main(){
    int numbers[5], total_positive, total_negative;
    int numbers_positve;
    double average;

    printf("Input the value of n1: ");
    scanf("%d", &numbers[0]);

    printf("Input the value of n2: ");
    scanf("%d", &numbers[1]);

    printf("Input the value of n3: ");
    scanf("%d", &numbers[2]);

    printf("Input the value of n4: ");
    scanf("%d", &numbers[3]);

    printf("Input the value of n5: ");
    scanf("%d", &numbers[4]);

    for (int i = 0; i < 5;i++) 
    {
        if (numbers[i] > 0) 
        {
            total_positive++;
            numbers_positve += numbers[i];
        }
        else 
        {
            total_negative++;
        }
    }

    average = (double) numbers_positve / total_positive;

    printf("\nNumber of positive numbers: %d", total_positive);
    printf("\nNumber of negative numbers: %d\n", total_negative);
    printf("\nAverage value of the said positive numbers: %.2f", average);
    printf("\n");

    return 0;
}