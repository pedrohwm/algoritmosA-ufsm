/*Escreva um programa que leia um número de dois dígitos e subtraia o valor de cada um dos 
dígitos do valor lido. O valor resultante deve ser exibido. */
#include <stdio.h>
int main() {
    int numero, digito1, digito2, resultado;
    printf("Digite um número de dois dígitos: ");
    scanf("%d", &numero);
    if (numero < 10 || numero > 99) {
        printf("Por favor, insira um número válido de dois dígitos.\n");
        return 1;
    }
    digito1 = numero / 10;
    digito2 = numero % 10;
    resultado = numero - digito1 - digito2;
    printf("O valor resultante após a subtração dos dígitos é: %d\n", resultado);
    return 0;
}