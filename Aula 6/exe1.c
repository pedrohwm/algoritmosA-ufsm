/*Ler dois valores inteiros positivos e calcular o seu produto sem usar o operador ' * ‘.*/
#include <stdio.h>
int main() {
    int a, b, produto = 0;
    printf("Digite dois valores inteiros positivos: ");
    scanf("%d %d", &a, &b);
    for (int i = 0; i < b; i++) {
        produto += a;
    }
    printf("O produto de %d e %d e: %d\n", a, b, produto);
}