/*Escrever um programa que leia um inteiro n e mostre na tela todos os valores inteiros entre 1 
e 1000 que são divisíveis por n.*/
#include <stdio.h>
int main() {
    int n;
    printf("Digite um valor inteiro n: ");
    scanf("%d", &n);

    printf("Valores inteiros entre 1 e 1000 divisíveis por %d:\n", n);
    for (int i = 1; i <= 1000; i++) {
        if (i % n == 0) {
            printf("%d\n", i);
        }
    }
}