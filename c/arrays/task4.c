/*
4. Array Copy

Write a program in C to copy the elements of one array into another array.

The task involves writing a C program to copy the elements from one array to another. The program 
will take a specified number of integer inputs to store in the first array, then copy these elements 
to a second array, and finally display the contents of both arrays.
*/

#include <stdio.h>

void make_copy(const int *arr, int *arr_copy, int size_arr)
{
    for (int i = 1; i < size_arr;i++) 
    {
        arr_copy[i] = arr[i];
    }
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

int main(){

    int nums[1000];
    int nums_copy[1000];
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

    printf("Array original is: ");
    show_arr(nums, size_arr);

    make_copy(nums, nums_copy, size_arr);

    printf("Array copy is: ");
    show_arr(nums, size_arr);

    return 0;
}