/*Escrever um programa que calcule e mostre todos os números primos (divisível apenas por 
1 e por ele mesmo) entre 2 e 100. 
Atenção: NÚMEROS PRIMOS SÃO NATURAIS, e o número 1 não é primo.*/
#include <stdio.h>
int main() {
    printf("Números primos entre 2 e 100:\n");
    for (int num = 2; num <= 100; num++) {
        int ePrimo = 1;
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                ePrimo = 0;
                break;
            }
        }
        if (ePrimo) {
            printf("%d\n", num);
        }
    }
    return 0;
}