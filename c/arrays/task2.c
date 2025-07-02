/*
2. Array Reverse Display

Write a program in C to read n number of values in an array and display them in reverse order.

This task requires writing a C program to read a user-defined number of integer values into an array 
and then display these values in reverse order. After storing the values, the 
program should first print them in the original order and then print them in the reversed order.
*/

#include <stdio.h> 

void reverse_arr(int *arr, int tamanho) {
    int inicio = 0;
    int fim = tamanho - 1;
    int temp; 
    
    while (inicio < fim) {
        
        temp = arr[inicio];
        arr[inicio] = arr[fim];
        arr[fim] = temp;

        inicio++;
        fim--;
    }
}

void display_arr(const int *arr, int tamanho) {
    
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n; 
    int nums[100]; 
                
    printf("Digite o numero de elementos (max 100): ");
    scanf("%d", &n);
    
    if (n <= 0 || n > 100) {
        printf("Numero de elementos invalido. Por favor, digite um valor entre 1 e 100.\n");
        return 1; 
    }

    printf("Digite %d inteiros:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &nums[i]);
    }

    printf("\nArray na ordem original:\n");
    display_arr(nums, n);

    reverse_arr(nums, n);
    
    printf("\nArray na ordem revertida:\n");
    display_arr(nums, n);

    return 0; 
}