/*Faça um algoritmo para ler dois valores inteiros. O primeiro representa o primeiro elemento 
de uma progressão aritmética, e o segundo a razão. Calcule e mostre os 10 elementos 
seguintes. */
#include <stdio.h>
int main() {
    int primeiroElemento, razao;
    printf("Digite o primeiro elemento da progressão aritmética: ");
    scanf("%d", &primeiroElemento);
    printf("Digite a razão da progressão aritmética: ");
    scanf("%d", &razao);
    printf("Os 10 elementos seguintes da progressão aritmética são:\n");
    for (int i = 1; i <= 10; i++) {
        int proximoElemento = primeiroElemento + i * razao;
        printf("%d\n", proximoElemento);
    }
    return 0;
}