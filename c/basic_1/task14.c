/*
Calculate bike’s average consumption

Write a C program to calculate a bike’s average consumption from the given total distance 
(integer value) travelled (in km) and spent fuel (in litters, float number – 2 decimal points).
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int distance;
    double fuel;
    double consumption;

    printf("Input value of distance\n");
    scanf("%d", &distance);

    printf("Input value of fuel\n");
    scanf("%lf", &fuel);

    consumption = distance / fuel;

    printf("Average consumption (km/lt) is %.2lf\n", consumption);

    return 0;
}