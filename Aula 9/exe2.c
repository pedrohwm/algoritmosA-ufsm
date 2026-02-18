/*Escrever um programa que leia dois vetores A e B de 20 elementos inteiros cada, que representam conjuntos. No 
programa devem ser gerados os conjuntos interseção entre A e B (A ∩ B), diferença entre A e B (A – B) e união entre A 
e B (A U B).(usando apenas vetores)*/
#include <stdio.h>
#define TAM 20
int main() {
    int A[TAM], B[TAM];
    int intersecao[TAM], diferenca[TAM], uniao[2 * TAM];
    int i, j, k, l;
    printf("Digite 20 elementos para o vetor A:\n");
    for (i = 0; i < TAM; i++) {
        scanf("%d", &A[i]);
    }
    printf("Digite 20 elementos para o vetor B:\n");
    for (i = 0; i < TAM; i++) {
        scanf("%d", &B[i]);
    }
    k = 0;
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            if (A[i] == B[j]) {
                intersecao[k++] = A[i];
                break;
            }
        }
    }
    l = 0;
    for (i = 0; i < TAM; i++) {
        int found = 0;
        for (j = 0; j < TAM; j++) {
            if (A[i] == B[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            diferenca[l++] = A[i];
        }
    }
    k = 0;
    for (i = 0; i < TAM; i++) {
        uniao[k++] = A[i];
    }
    for (i = 0; i < TAM; i++) {
        int found = 0;
        for (j = 0; j < TAM; j++) {
            if (B[i] == uniao[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            uniao[k++] = B[i];
        }
    }
    printf("Interseção A ∩ B:\n");
    for (i = 0; i < k && i < TAM; i++) {
        printf("%d ", intersecao[i]);
    }
    printf("\n");
    printf("Diferença A - B:\n");
    for (i = 0; i < l; i++) {
        printf("%d ", diferenca[i]);
    }