/*Escreva um programa que inicie com a leitura de um valor inteiro positivo N. A seguir, deve ser lida uma sequencia de valores inteiros positivos, interrompida pela leitura de um valor negativo. Ao final, deve ser exibido o maior valor informado na sequencia que seja menor do que N.*/
#include <stdio.h>
int main() {
    int n, valor;
    int maiorMenorQueN = -1;
    printf("Digite um valor inteiro positivo N: ");
    scanf("%d", &n);
    printf("Digite uma serie de números inteiros positivos (um negativo para terminar):\n");
    while (1) {
        scanf("%d", &valor);
        if (valor < 0) {
            break;
        }
        if (valor < n && valor > maiorMenorQueN) {
            maiorMenorQueN = valor;
        }
    }
    if (maiorMenorQueN == -1) {
        printf("Nenhum valor menor que %d foi informado.\n", n);
    } else {
        printf("O maior valor informado menor que %d e: %d\n", n, maiorMenorQueN);
    }
}