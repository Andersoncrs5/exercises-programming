/*
    Basic Arithmetic Operations

    Write a Java program to print the sum (addition), multiply, subtract, divide and remainder of two numbers.

    Test Data:
    Input first number: 125
    Input second number: 24
*/

import java.util.Scanner;

public class Exercise6 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("You write first value:");
        int num1 = scanner.nextInt();

        System.out.println("You write second value:");
        int num2 = scanner.nextInt();

        if (num1 < num2) {
            System.out.println("The value " + num1 + " should be bigger " + num2);
            return;
        }

        System.out.println("The sum: " + (num1+num2));
        System.out.println("The subtraction: " + (num1+num2));
        System.out.println("The multiplication: " + (num1*num2));
        System.out.println("The division: " + (num1/num2));

    }
}
