/*
Swap Variables

Write a Java program to swap two variables.
*/

public class task15 {
    public static void main(String[] args) {
        int a = 1;
        int b = 2;
        int temp;

        System.out.println("Before swapping : a, b = " + a + ", " + b);

        temp = a;
        a = b;
        b = temp;

        System.out.println("After swapping : a, b = " + a + ", " + b);
    }
}
