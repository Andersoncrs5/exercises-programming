/*
Check integer range or error for negative > 80

Write a C program that reads an integer and checks the specified range to which it belongs. 
Print an error message if the number is negative and greater than 80.
Specified Range: [0, 20], [21, 40], [41, 60], [61, 80]
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int value;
    printf("Input the value:");
    scanf("%d", &value);

    if (value >= 81)
    {
        printf("Outside the range!!!!\n");
    }

    if (value >= 61 && value <= 80)
    {
        printf("The value: %d is between %d and %d\n", value, 61, 80);
    }

    if (value >= 41 && value <= 60)
    {
        printf("The value: %d is between %d and %d\n", value, 41, 60);
    }

    if (value >= 21 && value <= 40)
    {
        printf("The value: %d is between %d and %d\n", value, 21, 40);
    }

    if (value >= 0 && value <= 20)
    {
        printf("The value: %d is between %d and %d\n", value, 0, 20);
    }


    
    return 0;
}