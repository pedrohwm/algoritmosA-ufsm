/*Escreva um programa que lê três valores inteiros e verifica se estes valores podem ser as dimensões dos 
lados de um triângulo.*/
#include <stdio.h>
int main() {
    int a, b, c;
    printf("Digite tres valores inteiros: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a) {
        printf("Os valores podem ser as dimensoes dos lados de um triangulo.\n");
    } else {
        printf("Os valores nao podem ser as dimensoes dos lados de um triangulo.\n");
    }
    return 0;
}