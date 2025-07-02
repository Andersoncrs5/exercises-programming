/*
Sum of Digits

Write a Java program and compute the sum of an integer's digits.

Test Data:
Input an intger: 25
*/

import java.util.Scanner;

public class task33 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n1, result = 0 ;

        System.out.println("Input the number 1 value");
        n1 = in.nextInt();

        String numStr = String.valueOf(n1);
        char[] intArray = numStr.toCharArray();

        for(char i : intArray) { result += Character.getNumericValue(i); }

        System.out.printf("The sum result of %d is %d", n1, result);
    }
}
