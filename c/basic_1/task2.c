/*
    Task 2:
    Write a C program to get the C version you are using.
*/

#include <stdio.h>

int main() {
    printf("C version: %ld\n", __STDC_VERSION__);
    return 0;
}