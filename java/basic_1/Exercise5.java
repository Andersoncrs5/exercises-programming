/*
    Product of Two Numbers

    Write a Java program that takes two numbers as input and displays the product of two numbers.

    Test Data:
    Input first number: 25
    Input second number: 5
*/

import java.util.Scanner;

public class Exercise5 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("You write first value:");
        int num1 = scanner.nextInt();

        System.out.println("You write second value:");
        int num2 = scanner.nextInt();

        System.out.println("The sum is: "  + (num1 + num2));
    }
}
