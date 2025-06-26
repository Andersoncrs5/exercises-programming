/*
Sum all odd numbers among five inputs

Write a C program that reads 5 numbers and sums all odd values between them.
*/

#include <stdio.h>

int main(){
    int num[5], total;

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
        if (num[i] % 2 != 0) 
        {
            total = total + num[i];
        }
    }

    printf("The value of nums odd is: %d\n", total);
    return 0;
}