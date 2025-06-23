//Circle: Area and Perimeter
//
//Write a Java program to print the area and perimeter of a circle.
//
//        In geometry, the area enclosed by a circle of radius r is πr2. Here the Greek letter π represents a
//        constant, approximately equal to 3.14159, which is equal to the ratio of the circumference of any circle
//        to its diameter.
//
//The circumference of a circle is the linear distance around its edge.

import java.util.Scanner;

public class task11 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.println("Put the radius value:");
        double radius = in.nextDouble();

        double area = Math.PI * (radius * radius);
        double perimeter = 2 * Math.PI * radius;

        System.out.printf("Perimeter value is = %.2f\n", perimeter);
        System.out.printf("Area value is = %.2f\n", area);
    }
}
