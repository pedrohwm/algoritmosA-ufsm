/*Escrever um programa que leia valores para uma matriz 5 x 5 e mostre na tela os índices e o valor de cada elemento 
em que o valor é maior que a soma dos seus índices. */
#include <stdio.h>
#define TAM 5
int main() {
    int matriz[TAM][TAM];
    printf("Digite os elementos da matriz 5 x 5:\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("Elementos maiores que a soma dos seus índices:\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            if (matriz[i][j] > (i + j)) {
                printf("Índices: (%d, %d), Valor: %d\n", i, j, matriz[i][j]);
            }
        }
    }
}