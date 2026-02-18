/*Escreva um programa em C em leia um vetor de 10 elementos inteiros não repetidos, além de dois valores inteiros val 
e n. O programa deve substituir o valor da posição n do vetor pelo valor lido em val. Como o vetor não deve ter valores 
repetidos, se o valor de val já aparecia no vetor, a posição da sua ocorrência anterior deve receber o valor da posição 
em que val será colocado. O vetor alterado deve ser mostrado ao final do programa.*/
#include <stdio.h>
#define TAM 10
int main() {
    int vetor [TAM];
    int val, n;
    int i, posicao_val = -1;
    printf("Digite 10 elementos inteiros nao repetidos:\n");
    for (i = 0; i < TAM; i++) {
        int temp;
        int repetido;
        do {
            repetido = 0;
            printf("Elemento %d: ", i + 1);
            scanf("%d", &temp);
            for (int j = 0; j < i; j++) {
                if (vetor[j] == temp) {
                    printf("Valor repetido! Digite outro valor.\n");
                    repetido = 1;
                    break;
                }
            }
        } while (repetido);
        vetor[i] = temp;
    }
    printf("Digite o valor a ser inserido (val): ");
    scanf("%d", &val);
    printf("Digite a posicao (n) onde o valor sera inserido (0 a 9): ");
    scanf("%d", &n);
    for (i = 0; i < TAM; i++) {
        if (vetor[i] == val) {
            posicao_val = i;
            break;
        }
    }
    if (posicao_val != -1) {
        vetor[posicao_val] = vetor[n];
    }
    vetor[n] = val;
    printf("Vetor alterado:\n");
    for (i = 0; i < TAM; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}