/*Escreva um programa em C que leia dois números naturais não nulos e calcule e mostre o 
Máximo Divisor Comum entre eles. */
#include <stdio.h>
int main() {
    int a, b;
    printf("Digite dois números naturais não nulos: ");
    scanf("%d %d", &a, &b);
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    printf("O Máximo Divisor Comum é: %d\n", a);
}