/*Escrever um programa que leia dois vetores de 10 elementos inteiros e faça a multiplicação dos elementos de mesmo 
índice, colocando o resultado em um terceiro vetor. Mostre o vetor resultante.*/
#include <stdio.h>
#define TAM 10
int main() {
    int vetor1[TAM], vetor2[TAM], resultado[TAM];
    printf("Digite 10 elementos do primeiro vetor:\n");
    for (int i = 0; i < TAM; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor1[i]);
    }
    printf("Digite 10 elementos do segundo vetor:\n");
    for (int i = 0; i < TAM; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor2[i]);
    }
    for (int i = 0; i < TAM; i++) {
        resultado[i] = vetor1[i] * vetor2[i];
    }
    printf("Vetor resultante da multiplicação:\n");
    for (int i = 0; i < TAM; i++) {
        printf("Elemento %d: %d\n", i + 1, resultado[i]);
    }
}