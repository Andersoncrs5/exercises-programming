/*
3. Array Sum Calculation

Write a program in C to find the sum of all elements of an array.

The task requires writing a C program to read a specified number of integers into an array 
and then calculate and print the sum of these elements. After storing the input values, the
program should iterate through the array to compute the total sum and display the result.
*/


#include <stdio.h>

int sum_arr(const int *arr, int size_arr)
{
    int result = 0;

    for (int i = 0; i < size_arr; i++) 
    {
        result += arr[i];
    }

    return result;
}

void show_arr(const int *arr, int size)
{
    printf("The array elements are: ");
    for (int i = 0; i < size; i++) 
    {
        printf("%d,", arr[i]);
    }
    printf("\n");
}

int main()
{
    int nums[1000];
    unsigned int size_arr;

    printf("Input size array: ");
    scanf("%d", &size_arr);

    if (size_arr <= 0 || size_arr > 1000) {
        printf("Invalid array size. Please enter a value between 1 and 1000.\n");
        return 1;
    }
    
    for (int i = 0; i < size_arr; i++) 
    {
        printf("Input value of position %d: ", i + 1);
        scanf("%d", &nums[i]);
    }

    int sum = sum_arr(nums, size_arr);

    printf("The sum of array: \n");
    show_arr(nums, size_arr);

    printf("is %d\n", sum);

    return 0;
}