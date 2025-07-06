package arrays;

/*
Given an array of integers nums and an integer target, return indices of the two numbers
such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.
*/

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;

public class TwoSum {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        ArrayList<Integer> nums = new ArrayList<>(
                List.of(6, 6, 2, 8, 9, 4, 6, 5, 2, 1, 6, 9, 2, 6)
        );

        System.out.println("Input the target value: ");
        int target = in.nextInt();

        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums.get(i) + nums.get(j) == target) {
                    System.out.printf("Found Solution: The values at indices %d (%d) and %d (%d) sum up to %d\n",i, nums.get(i), j, nums.get(j), target);
                    in.close();
                    return;
                }
            }
        }
        
        System.out.println("No solution found for target " + target);
        in.close();
    }
}
