/*Escreva um programa que leia uma matriz 5 x 5 de caracteres e verifique se existem linhas e colunas que possuem 
valores iguais, na mesma sequencia. Quando uma coincidência for encontrada, informe na tela a linha e a coluna. Na 
matriz abaixo, a linha 1 e a coluna 3 tem os mesmos valores.*/
#include <stdio.h>
#define TAM 5
int main() {
    char matriz[TAM][TAM];
    printf("Digite os elementos da matriz 5 x 5 (caracteres):\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            scanf(" %c", &matriz[i][j]);
        }
    }
    printf("Coincidências encontradas:\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            int linhaIgual = 1;
            int colunaIgual = 1;
            for (int k = 0; k < TAM; k++) {
                if (matriz[i][k] != matriz[k][j]) {
                    linhaIgual = 0;
                    break;
                }
            }
            for (int k = 0; k < TAM; k++) {
                if (matriz[k][j] != matriz[i][k]) {
                    colunaIgual = 0;
                    break;
                }
            }
            if (linhaIgual && colunaIgual) {
                printf("Linha: %d, Coluna: %d\n", i, j);
            }
        }
    }
}