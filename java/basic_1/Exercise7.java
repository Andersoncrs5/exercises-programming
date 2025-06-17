/*
    Multiplication Table

    Write a Java program that takes a number as input and prints its multiplication table up to 10.

    Test Data:
    Input a number: 8
*/

import java.util.Scanner;

public class Exercise7 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int num1;

        System.out.println("Input the value: ");
        num1 = scanner.nextInt();

        if (num1 <= 0) {
            System.out.println("The value should to be bigger than 0");
            return;
        }

        for (int i = 0; i < 11; i++) {
            System.out.println(num1 + " x " + i + " = " + (num1*i));
        }

    }

}
