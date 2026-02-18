/*Escrever um programa para ler os valores de duas matrizes 10 x 10. A seguir, as matrizes devem ser somadas, 
colocando o resultado em uma terceira matriz que é exibida na tela. */
#include <stdio.h>
#define TAM 10
int main() {
    int matriz1[TAM][TAM], matriz2[TAM][TAM], resultado[TAM][TAM];
    printf("Digite os elementos da primeira matriz 10 x 10:\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            scanf("%d", &matriz1[i][j]);
        }
    }
    printf("Digite os elementos da segunda matriz 10 x 10:\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            scanf("%d", &matriz2[i][j]);
        }
    }
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
    printf("Matriz resultante da soma:\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }
}