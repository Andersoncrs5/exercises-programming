/*
Print numbers between 1 and 100 with a specific remainder

Write a C program to print all numbers between 1 and 100 which are divided by a 
specified number and the remainder will be 3.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    unsigned int *number = (unsigned int *)malloc(sizeof(unsigned int));
    
    if (number == NULL) {
        printf("Memory allocation failed!\n");
        return 1; 
    }
    printf("Input number value: ");
    
    scanf("%u", number); 

    printf("Checking numbers from 1 to 100 that leave a remainder of 3 when dividing %u:\n", *number);

    for (int i = 1; i <= 100; i++) {        
        if ((*number % i) == 3) {
            
            printf("  %u %% %d = 3 (i = %d)\n", *number, i, i); 
        }
    }

    free(number);
    number = NULL; 

    return 0; 
}
