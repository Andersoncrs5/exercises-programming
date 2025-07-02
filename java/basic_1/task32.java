/*
Compare Two Numbers

Write a Java program to compare two numbers.

Test Data:
Input first integer: 25
Input second integer: 39
*/

import java.util.Scanner;

public class task32 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int n1, n2;

        System.out.println("Input the number 1 value");
        n1 = in.nextInt();

        System.out.println("Input the number 2 value");
        n2 = in.nextInt();

        if (n1 == n2)
            System.out.printf("%d == %d\n", n1, n2);

        if (n1 != n2)
            System.out.printf("%d != %d\n", n1, n2);

        if (n1 < n2)
            System.out.printf("%d < %d\n", n1, n2);

        if (n1 > n2)
            System.out.printf("%d > %d\n", n1, n2);

        if (n1 <= n2)
            System.out.printf("%d <= %d\n", n1, n2);

        if (n1 >= n2)
            System.out.printf("%d >= %d\n", n1, n2);


    }
}
