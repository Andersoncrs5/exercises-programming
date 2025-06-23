/*
    Task 5:
    Write a C program to compute the perimeter and area of a rectangle with a height of 7 inches and 
    width of 5 inches.

    C programming: Perimeter of a rectangle

    A perimeter is a path that surrounds a two-dimensional shape. The word comes from the Greek peri 
    (around) and meter (measure). The perimeter can be used to calculate the length of fence required 
    to surround a yard or garden. For rectangles or kites which have only two different side lengths, 
    say x and y, the perimeter is equal to 2x + 2y
*/

#include <stdio.h>

int main() {
    double length = 7;
    double width = 5;

    double perimeter = (2*length) + (2*width);
    double area = length * width;

    printf("Perimeter of the rectangle = %f inches\n", perimeter);
    printf("Area of the rectangle = %f square inches\n", area);

    return 0;
}
