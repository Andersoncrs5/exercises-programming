/*
Write a Java program that takes five numbers as input to calculate and print the average of the numbers.

Test Data:
Input first number: 10
Input second number: 20
Input third number: 30
Input fourth number: 40
Enter fifth number: 50
*/

import java.util.Scanner;

public class task12 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n1,n2,n3,n4,n5;

        System.out.println("Input first number");
        n1 = in.nextInt();

        System.out.println("Input second number");
        n2 = in.nextInt();

        System.out.println("Input third number");
        n3 = in.nextInt();

        System.out.println("Input fourth number");
        n4 = in.nextInt();

        System.out.println("Input fifth number");
        n5 = in.nextInt();

        System.out.println("The average is: " + (n1 + n2 + n3 + n4 + n5)/5 );

    }
}
