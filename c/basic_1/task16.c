/*
Break amount into smallest banknotes

Write a C program to read an amount (integer value) and break the amount into the smallest 
possible number of bank notes.
Note: The possible banknotes are 100, 50, 20, 10, 5, 2 and 1.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int value, notes;

    printf("Input value: ");
    scanf("%d", &value);

    int denominations[] = {100, 50, 20, 10, 5, 2, 1};

    for(int i = 0; i < 7; i++) {
        notes = value / denominations[i];
        printf("%d nota(s) de %d\n", notes, denominations[i]);
        value = value % denominations[i];
    }

    return 0;
}