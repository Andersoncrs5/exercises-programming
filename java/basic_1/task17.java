/*
Binary Addition

Write a Java program to add two binary numbers.

In digital electronics and mathematics, a binary number is a number expressed in the base-2 numeral
system or binary numeral system. This system uses only two symbols: typically 1 (one) and 0 (zero).

Test Data:
Input first binary number: 100010
Input second binary number: 110010
*/

import java.util.Scanner;

public class task17 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        long b1, b2;
        int i = 0, rm = 0;
        int[] sum = new int[20];

        System.out.print("Input first binary number: ");
        b1 = in.nextLong();

        System.out.print("Input second binary number: ");
        b2 = in.nextLong();

        while (b1 != 0 || b2 != 0)
        {
            sum[i++] = (int)((b1 % 10 + b2 % 10 + rm) % 2);
            rm = (int)((b1 % 10 + b2 % 10 + rm) / 2);
            b1 = b1 / 10;
            b2 = b2 / 10;
        }

        if (rm != 0) {
            sum[i++] = rm;
        }

        --i;

        System.out.print("Sum of two binary numbers: ");
        while (i >= 0) {
            System.out.print(sum[i--]);
        }

        System.out.print("\n");
    }
}
