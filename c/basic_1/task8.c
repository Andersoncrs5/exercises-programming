/*
    Convert days to years, weeks, and days

    Write a C program to convert specified days into years, weeks and days.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int days = 1329;

    int years = days / 365;
    int weeks = (days % 365)/7;
    int days2 = days - ((years*365) + (weeks*7)); 

    printf("weeks:%d\n", weeks);
    printf("years:%d\n", years);
    printf("Days:%d\n", days2);

    return 0;
}