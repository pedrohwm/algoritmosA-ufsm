/*Escreva um programa que lê um número e informa na tela se este número é primo ou não. 
Atenção: NÚMEROS PRIMOS SÃO NATURAIS, e o número 1 não é primo.*/
#include <stdio.h>
int main() {
    int numero, ePrimo = 1;
    printf("Digite um numero inteiro maior que 1: ");
    scanf("%d", &numero);
    if (numero <= 1) {
        printf("Numero invalido. Por favor, digite um numero maior que 1.\n");
        return 1;
    }
    for (int i = 2; i <= numero / 2; i++) {
        if (numero % i == 0) {
            ePrimo = 0;
            break;
        }
    }
    if (ePrimo) {
        printf("O numero %d e primo.\n", numero);
    } else {
        printf("O numero %d não e primo.\n", numero);
    }
}