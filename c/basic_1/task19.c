/*
Validate four integers based on conditions

Write a C program that accepts 4 integers p, q, r, s from the user where q, r and s are positive 
and p is even. If q is greater than r and s is greater than p and if the sum of r and s is greater than 
the sum of p and q print "Correct values", otherwise print "Wrong values".

Test Data :
Input the second integer: 35
Input the third integer: 15
Input the fourth integer: 46
Expected Output:
Wrong values
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int p, q, r, s, sum;

    printf("Input value of p\n");
    scanf("%d", &p);

    printf("Input value of q\n");
    scanf("%d", &q);

    printf("Input value of r\n");
    scanf("%d", &r);

    printf("Input value of s\n");
    scanf("%d", &s);

    if (p < 0 || r < 0 || s < 0 ){
        printf("The value of p, r and s should to be positive!!!!!\n");
        return 0;
    }

    sum = r + s;

    if (q > r && s > p && sum > p && sum > q && p % 2 == 0 ) 
    {
        printf("Correct values\n");
    }
    else 
    {
        printf("Wrong values\n");
    }

    return 0;
}