/*
Reverse a String

Write a Java program to reverse a string.

Test Data:
Input a string: The quick brown fox
*/

import java.util.Collections;

public class task37 {
    public static void main(String[] args) {
        StringBuilder word = new StringBuilder("The quick brown fox");
        System.out.println("Word after reverse: " + word);
        word.reverse();
        System.out.println("Word before reverse: " + word);
    }
}
