/*
Check if two integers are multiples

Write a C program that reads two integers and checks whether they are multiplied or not.
*/

#include <stdio.h>


int main(){
    int num1, num2;

    printf("Input value of num 1: ");
    scanf("%d", &num1);

    printf("Input value of num 2: ");
    scanf("%d", &num2);

    if ((num1 % num2) != 0) 
    {
        printf("The value of %d is not multiple of %d!!!", num1, num2);
        return 0;
    }

    printf("The value of %d is multiple of %d!!!\n", num1, num2);
    return 0;
}