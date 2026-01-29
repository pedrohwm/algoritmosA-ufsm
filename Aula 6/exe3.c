/* Escreva um programa que leia um valor inteiro N. A seguir, o programa deve ler outros 1000 
valores inteiros, e mostrar na tela quantos destes valores são maiores, iguais ou menores que 
N.*/
#include <stdio.h>
int main() {
    int N, valor;
    int maiores = 0, iguais = 0, menores = 0;
    printf("Digite um valor inteiro N: ");
    scanf("%d", &N);
    for (int i = 0; i < 1000; i++) {
        printf("Digite o valor inteiro %d: ", i + 1);
        scanf("%d", &valor);
        if (valor > N) {
            maiores++;
        } else if (valor == N) {
            iguais++;
        } else {
            menores++;
        }
    }
    printf("Quantidade de valores maiores que %d: %d\n", N, maiores);
    printf("Quantidade de valores iguais a %d: %d\n", N, iguais);
    printf("Quantidade de valores menores que %d: %d\n", N, menores);
}