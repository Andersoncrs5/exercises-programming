/*
Find the maximum of three integers

Write a C program that accepts three integers and finds the maximum of three.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1,n2,n3;

    printf("Input value of num 1\n");
    scanf("%d", &n1);

    printf("Input value of num 2\n");
    scanf("%d", &n2);

    printf("Input value of num 3\n");
    scanf("%d", &n3);

    if (n1 > n2 && n1 > n3) {
        printf("%d is the greatest among %d and %d\n", n1, n2, n3);
        return 0;
    }

    if (n2 > n1 && n2 > n3) {
        printf("%d is the greatest among %d and %d\n", n2, n1, n3);
        return 0;
    }

    if (n3 > n1 && n3 > n2) {
        printf("%d is the greatest among %d and %d\n", n3, n1, n2);
        return 0;
    }

    return 0;
}
