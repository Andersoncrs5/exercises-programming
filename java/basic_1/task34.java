/*
Hexagon Area

Write a Java program to compute hexagon area.

Test Data:
Input the length of a side of the hexagon: 6
*/

import java.util.Scanner;

public class task34 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        System.out.println("Input side value: ");
        int side = in.nextInt();

        double area = (6 * (side * side))/ (4 * Math.tan((Math.PI/6)));

        System.out.printf("The area value is %.2f", area);
    }
}
