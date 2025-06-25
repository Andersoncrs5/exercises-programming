/*
Solve quadratic equation using Bhaskara's formula

Write a C program to print the roots of Bhaskara’s formula from the given three floating numbers.

Display a message if it is not possible to find the roots.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    double a, b, c, delta, x1, x2;

    printf("Input value of a: ");
    scanf("%lf", &a);

    printf("Input value of b: ");
    scanf("%lf", &b);

    printf("Input value of c: ");
    scanf("%lf", &c);

    delta = (b * b) - 4 * a * c;

    if (delta < 0) 
    {
        printf("Impossible to find the roots.\n");
        return 0;
    }
    delta = sqrt(delta);
    x1 = (-b + delta)/2*a;
    x2 = (-b - delta)/2*a;

    printf("Root 1 = %.5lf\n", x1);
    printf("Root 2 = %.5lf\n", x2);

    return 0;
}