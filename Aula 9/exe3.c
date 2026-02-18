/* Ler dois vetores de 10 elementos e verificar se os números que os formam são os mesmos, ainda que em ordem 
diferente. Para simplificar, considere que não há números repetidos dentro de um mesmo vetor.*/
#include <stdio.h>
#define TAM 10
int main() {
    int vetor1[TAM], vetor2[TAM];
    int i, j, encontrado, iguais = 1;
    printf("Digite 10 elementos para o primeiro vetor:\n");
    for (i = 0; i < TAM; i++) {
        scanf("%d", &vetor1[i]);
    }
    printf("Digite 10 elementos para o segundo vetor:\n");
    for (i = 0; i < TAM; i++) {
        scanf("%d", &vetor2[i]);
    }
    for (i = 0; i < TAM; i++) {
        encontrado = 0;
        for (j = 0; j < TAM; j++) {
            if (vetor1[i] == vetor2[j]) {
                encontrado = 1;
                break;
            }
        }
        if (!encontrado) {
            iguais = 0;
            break;
        }
    }
    if (iguais) {
        printf("Os vetores possuem os mesmos elementos.\n");
    } else {
        printf("Os vetores nao possuem os mesmos elementos.\n");
    }
}