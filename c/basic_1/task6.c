/*
    Task 6:
    Write a C program to compute the perimeter and area of a circle with a given radius.

    C programming: Area and circumference of a circle

    In geometry, the area enclosed by a circle of radius r is πr2. Here the Greek letter π represents 
    a constant, approximately equal to 3.14159, which is equal to the ratio of the circumference of any
    circle to its diameter.

    The circumference of a circle is the linear distance around its edge.
*/

#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159  

int main() {
    double r = 8;  

    double *area = (double *)malloc(sizeof(double));
    double *perimeter = (double *)malloc(sizeof(double));

    if (area == NULL || perimeter == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1; 
    }

    *area = PI * (r * r);
    *perimeter = 2 * PI * r;

    printf("Perimeter of the Circle = %.2f inches\n", *perimeter);
    printf("Area of the Circle = %.2f square inches\n", *area);

    free(area);
    free(perimeter);

    return 0;
}