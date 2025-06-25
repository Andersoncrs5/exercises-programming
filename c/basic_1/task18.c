/*
Convert days to years, months, days

Write a C program to convert a given integer (in days) to years, months and days, assuming that 
all months have 30 days and all years have 365 days.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int value, years, months, days;

    printf("Input value days:");
    scanf("%d", &value);

    years = value / 365;
    value = value % 365;
    months = value / 30;
    days = value % 30;

    printf("Date is years: %d, month: %d and days: %d  \n", years, months, days);

    return 0;
}