import java.util.Scanner;

/*
Count Characters in String

Write a Java program to count letters, spaces, numbers and other characters in an input string.

Test Data:
The string is : Aa kiu, I swd skieo 236587. GH kiu: sieo?? 25.33
*/
public class task38 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.println("Input the string");
        String word = in.nextLine();
        check(word.toCharArray());
    }

    public static void check(char[] arr ) {
        int letters = 0, spaces = 0, numbers = 0, other = 0;

        for (char c : arr) {
            if (Character.isLetter(c)) {
                letters++;
            } else if (Character.isSpaceChar(c)) {
                spaces++;
            } else if (Character.isDigit(c)) {
                numbers++;
            } else {
                other++;
            }
        }

        System.out.printf("The letters amount in string is %d\n", letters);
        System.out.printf("The spaces amount in string is %d\n", spaces);
        System.out.printf("The numbers amount in string is %d\n", numbers);
        System.out.printf("The other amount in string is %d\n", other);
    }

}
