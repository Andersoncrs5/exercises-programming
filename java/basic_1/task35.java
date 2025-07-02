/*
Polygon Area

Write a Java program to compute the area of a polygon.

Area of a polygon = (n*s^2)/(4*tan(π/n))
where n is n-sided polygon and s is the length of a side.

Test Data:
Input the number of sides on the polygon: 7
Input the length of one of the sides: 6
*/

import java.util.Scanner;

public class task35 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        System.out.println("Input sides number of polygon: ");
        int sides = in.nextInt();

        System.out.println("Input side length of polygon: ");
        int length = in.nextInt();

        double area = (sides * ((length * length))) / (4 * Math.tan(Math.PI/sides) );

        System.out.printf("The area value is %.4f", area);
    }
}
