/*
    Task 6:
    Write a C program to display following variables.
    a+ c, x + c,dx + x, ((int) dx) + ax, a + x, s + b, ax + b, s + c, ax + c, ax + ux
    Variable declaration :
    int a = 125, b = 12345;
    long ax = 1234567890;
    short s = 4043;
    float x = 2.13459;
    double dx = 1.1415927;
    char c = 'W';
    unsigned long ux = 2541567890;
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *a = (int *)malloc(sizeof(int));
    int *b = (int *)malloc(sizeof(int));
    long *ax = (long *)malloc(sizeof(long));
    short *s = (short *)malloc(sizeof(short));
    float *x = (float *)malloc(sizeof(float));
    double *dx = (double *)malloc(sizeof(double));
    char *c = (char *)malloc(sizeof(char));
    unsigned long *ux = (unsigned long *)malloc(sizeof(unsigned long));

    if (!a || !b || !ax || !s || !x || !dx || !c || !ux) {
        printf("Erro ao alocar memória!\n");
        return 1; 
    }

    *a = 125;
    *b = 12345;
    *ax = 1234567890;
    *s = 4043;
    *x = 2.13459f;
    *dx = 1.1415927;
    *c = 'W';
    *ux = 2541567890;

    printf("a + c = %d\n", *a + *c);
    printf("x + c = %f\n", *x + *c);
    printf("dx + x = %lf\n", *dx + *x);
    printf("((int)dx) + ax = %ld\n", ((int)*dx) + *ax);
    printf("a + x = %f\n", *a + *x);
    printf("s + b = %d\n", *s + *b);
    printf("ax + b = %ld\n", *ax + *b);
    printf("s + c = %d\n", *s + *c);
    printf("ax + c = %ld\n", *ax + *c);
    printf("ax + ux = %lu\n", *ax + *ux);

    free(a);
    free(b);
    free(ax);
    free(s);
    free(x);
    free(dx);
    free(c);
    free(ux);

    return 0;
}
