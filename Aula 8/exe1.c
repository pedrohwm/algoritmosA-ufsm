/*Escreva um programa que leia um valor n calcule o n-ésimo elemento de uma serie de números em que cada elemento é dado pelo elemento anterior somado ao valor da iteração. A série é construida assim:
O próximo é 1 (por definição: 0 do valor anterior + 1 por ser a primeira iteração/soma)
O próximo é 3 (1 do valor anterior + 2 por ser a segunda iteração/soma)
O próximo é 6 (3 do valor anterior + 3 por ser a terceira iteração/soma)*/
#include <stdio.h>
int main() {
    int n, i;
    int elemento = 0;
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        elemento += i;
    }
    printf("O %d-ésimo elemento da série é: %d\n", n, elemento);
}