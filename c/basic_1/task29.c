/*
Sum all odd values among 5 inputs

Write a C program that read 5 numbers and sum of all odd values between them.
*/

#include <stdio.h>

int main(){
    int numbers[5], sum_odd_numbers;

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
        if ((numbers[i] % 2) != 0) 
        {
            sum_odd_numbers += numbers[i];
        }
            
    }

    printf("\nSum of all odd values: %d\n", sum_odd_numbers); 

    return 0;
}