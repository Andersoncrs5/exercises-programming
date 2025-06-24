/*
Calculate distance between two points

Write a C program to calculate the distance between two points.

Note: x1, y1, x2, y2 are all double values.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    double x1,x2,y1,y2, result;

    printf("Input value of x1\n");
    scanf("%lf", &x1);

    printf("Input value of x2\n");
    scanf("%lf", &x2);

    printf("Input value of y1\n");
    scanf("%lf", &y1);

    printf("Input value of y2\n");
    scanf("%lf", &y2);

    result = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2 - y1));

    printf("The distance between the said is %.4lf\n", result);

    return 0;
}