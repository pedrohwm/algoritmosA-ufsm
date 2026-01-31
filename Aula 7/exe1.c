/*Escreva um programa que leia dois valores inteiros, k e n, e calcule e mostre na tela um 
valor S dado por  S = k * 1  + (k+1) * 2  + (k+2) * 3  + ... + (k+n) * (n+1).*/
#include <stdio.h>
int main() {
    int k, n;
    int S = 0;
    printf("Digite o valor de k: ");
    scanf("%d", &k);
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++) {
        S += (k + i) * (i + 1);
    }
    printf("O valor de S é: %d\n", S);
}