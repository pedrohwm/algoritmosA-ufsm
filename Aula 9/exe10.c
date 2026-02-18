/*Escrever  um  programa  para  ler  duas  matrizes  4  x  4  de  números  inteiros  e  calcular  a  matriz  resultante  da 
multiplicação das matrizes lidas.*/
#include <stdio.h>
#define TAM 4
int main() {
    int matriz1[TAM][TAM], matriz2[TAM][TAM], resultado[TAM][TAM];
    printf("Digite os elementos da primeira matriz 4 x 4:\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            scanf("%d", &matriz1[i][j]);
        }
    }
    printf("Digite os elementos da segunda matriz 4 x 4:\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            scanf("%d", &matriz2[i][j]);
        }
    }
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            resultado[i][j] = 0;
            for (int k = 0; k < TAM; k++) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }
    printf("Matriz resultante da multiplicação:\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }
}