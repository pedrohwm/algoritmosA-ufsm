/*Faça um programa que lê um valor inteiro n informado pelo usuário e calcula e mostra o n-
ésimo elemento da série de Fibonacci (0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...). */
#include <stdio.h>
int main() {
    int n, a = 0, b = 1, proximo;
    printf("Digite um valor inteiro n: ");
    scanf("%d", &n);
    if (n == 0) {
        printf("O %d-esimo elemento da serie de Fibonacci e: %d\n", n, a);
        return 0;
    } else if (n == 1) {
        printf("O %d-esimo elemento da serie de Fibonacci e: %d\n", n, b);
        return 0;
    }
    for (int i = 2; i <= n; i++) {
        proximo = a + b;
        a = b;
        b = proximo;
    }
    printf("O %d-esimo elemento da serie de Fibonacci e: %d\n", n, b);
}