/*
Get month name from number (1–12)

Write a C program that reads an integer between 1 and 12 and prints the month of the year in English.
*/

#include <stdio.h>

int main(){

    int num;

    printf("Input num value: ");
    scanf("%d", &num);

    if (num > 12 || num < 0)
    {
        printf("Valur should to be biggest than 0 and less than 12");
        return 0;
    }

    switch (num) {
        case 1 : printf("Month is: January\n"); break;
        case 2 : printf("Month is: February\n"); break;
        case 3 : printf("Month is: March\n"); break;
        case 4 : printf("Month is: April\n"); break;
        case 5 : printf("Month is: May\n"); break;
        case 6 : printf("Month is: June\n"); break;
        case 7 : printf("Month is: July\n"); break;
        case 8 : printf("Month is: August\n"); break;
        case 9 : printf("Month is: September\n"); break;
        case 10 : printf("Month is: October\n"); break;
        case 11 : printf("Month is: November\n"); break;
        case 12 : printf("Month is: December\n"); break;
    }

    return 0;
}