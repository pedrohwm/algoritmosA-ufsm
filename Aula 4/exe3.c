/*Escrever um programa que leia dois números inteiros e uma das operações aritméticas 
básicas (através dos caracteres +, -, *, /) e a seguir realize a operação escolhida sobre estes 
números, mostrando o resultado.*/
#include <stdio.h>
int main() {
    int num1, num2;
    char operacao;
    float resultado;
    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);
    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);
    printf("Digite a operação (+, -, *, /): ");
    scanf(" %c", &operacao);
    switch (operacao) {
        case '+':
            resultado = num1 + num2;
            printf("Resultado: %d + %d = %.2f\n", num1, num2, resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("Resultado: %d - %d = %.2f\n", num1, num2, resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("Resultado: %d * %d = %.2f\n", num1, num2, resultado);
            break;
        case '/':
            if (num2 != 0) {
                resultado = (float)num1 / num2;
                printf("Resultado: %d / %d = %.2f\n", num1, num2, resultado);
            } else {
                printf("Erro: Divisão por zero não é permitida.\n");
            }
            break;
        default:
            printf("Operação inválida.\n");
            break;
    }
    return 0;
}