/*Escreva um programa em C que leia valores para uma matriz 50 x 50 de inteiros e calcule a soma dos elementos 
colocados acima da diagonal principal e da diagonal secundária*/
#include <stdio.h>
#define TAM 50
int main() {
    int matriz[TAM][TAM];
    int somaDiagonalPrincipal = 0;
    int somaDiagonalSecundaria = 0;
    printf("Digite os elementos da matriz 50 x 50:\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            if (j > i) {
                somaDiagonalPrincipal += matriz[i][j];
            }
            if (j < TAM - 1 - i) { 
                somaDiagonalSecundaria += matriz[i][j];
            }
        }
    }
    printf("Soma dos elementos acima da diagonal principal: %d\n", somaDiagonalPrincipal);
    printf("Soma dos elementos acima da diagonal secundária: %d\n", somaDiagonalSecundaria);
}