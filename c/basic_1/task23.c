/*
Check for valid triangle and calculate perimeter

Write a C program that reads three floating-point values and checks if it is possible to make a 
triangle with them. Determine the perimeter of the triangle if the given values are valid.
*/

#include <stdio.h>

int main(){
    float a, b, c, p;

    printf("Input value of a: ");
    scanf("%f", &a);

    printf("Input value of b: ");
    scanf("%f", &b);

    printf("Input value of c: ");
    scanf("%f", &c);

    if (a + b < c)
    {
        printf("False");
        return 0;
    }

    if (a + c < b)
    {
        printf("False");
        return 0;
    }

    if (b + c < a)
    {
        printf("False");
        return 0;
    }

    p = a+b+c; 
    printf("Perimeter  = %.1f\n", p);

    return 0;
}
