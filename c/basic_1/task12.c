/*
Print employee ID and monthly salary

Write a C program that accepts an employee's ID, total worked hours in a month and the amount he 
received per hour. Print the ID and salary (with two decimal places) of the employee for a particular
month.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    char name[20];
    int hour;
    int value;
    double result;

    printf("Input your name:\n");
    scanf("%s", &name);

    printf("Input hours:\n");
    scanf("%d", &hour);

    printf("Input hours value:\n");
    scanf("%d", &value);

    result = hour * value;

    printf("The user name: %s\n", name);
    printf("The salary this mouth: %.2f\n", result);

    return 0;
}