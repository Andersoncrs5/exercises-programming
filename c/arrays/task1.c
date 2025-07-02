/*
1. Array Store & Print

Write a program in C to store elements in an array and print them.

The task involves writing a C program to take some integer inputs from the user, store them in 
an array, and then print all the elements of the array. The input values should be provided 
sequentially, and the program should output the array's elements in the order they were entered.
*/

#include <stdio.h>

int main(){
    int nums[10];

    for (int i = 0; i < 10; i++) 
    {
        printf("Input the value of num %d: ", i);
        scanf("%d", &nums[i]);
    }

    for(int i=0; i<10; i++)  
    {  
        printf("%d  ", nums[i]);
    } 
    printf("\n");
    return 0;
}