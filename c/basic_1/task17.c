/*
Convert seconds into hours, minutes, seconds

Write a C program to convert a given integer (in seconds) to hours, minutes and seconds.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int seconds, hours, minutes, sss;

    printf("Input the seconds:");
    scanf("%d", &seconds);

    hours = seconds / 3600;
    seconds = seconds % 3600; 
    minutes = seconds / 60;
    sss = seconds % 60;

    printf("Data: %d/%d/%d \n", hours, minutes, sss);

    return 0;
}