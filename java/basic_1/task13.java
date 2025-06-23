/*
Rectangle: Area and Perimeter

Write a Java program to print the area and perimeter of a rectangle.

Java: Perimeter of a rectangle

A perimeter is a path that surrounds a two-dimensional shape. The word comes from the Greek peri (around) and meter
(measure). The perimeter can be used to calculate the length of fence required to surround a yard or garden. Following
image represents the perimeter of a rectangle.
*/

import java.util.Scanner;

public class task13 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        System.out.println("Input the width:");
        Double width = in.nextDouble();

        System.out.println("Input the height:");
        Double height = in.nextDouble();

        Double perimeter = 2 * (height + width);
        Double area = width * height;

        System.out.printf("Perimeter is 2*(%.2f + %.2f) = %.2f \n", height, width, perimeter);

        System.out.printf("Area is %.2f * %.2f = %.2f \n", width, height, area);

    }
}
