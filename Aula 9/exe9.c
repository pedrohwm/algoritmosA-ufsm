/*Escrever um programa que leia uma matriz 3 x 5 e armazene a i-ésima coluna da matriz em um vetor de 3 elementos.*/
#include <stdio.h>
#define TAM_LINHA 3
#define TAM_COLUNA 5
int main() {
    int matriz[TAM_LINHA][TAM_COLUNA];
    int vetor[TAM_LINHA];
    int coluna;
    printf("Digite os elementos da matriz 3 x 5:\n");
    for (int i = 0; i < TAM_LINHA; i++) {
        for (int j = 0; j < TAM_COLUNA; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("Digite o número da coluna (0 a 4) que deseja armazenar no vetor:\n");
    scanf("%d", &coluna);
    if (coluna < 0 || coluna >= TAM_COLUNA) {
        printf("Coluna inválida. Por favor, escolha um número entre 0 e 4.\n");
        return 1;
    }
    for (int i = 0; i < TAM_LINHA; i++) {
        vetor[i] = matriz[i][coluna];
    }
    printf("Vetor resultante da coluna %d:\n", coluna);
    for (int i = 0; i < TAM_LINHA; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}