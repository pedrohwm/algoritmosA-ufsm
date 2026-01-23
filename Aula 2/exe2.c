/*Escrever um programa que leia dois números e verifique se um deles é divisor do outro.*/
#include <stdio.h>
int main() {
    int num1, num2;
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    if (num2 != 0 && num1 % num2 == 0) {
        printf("%d e divisor de %d.\n", num2, num1);
    } else if (num1 != 0 && num2 % num1 == 0) {
        printf("%d e divisor de %d.\n", num1, num2);
    } else {
        printf("Nenhum dos numeros e divisor do outro.\n");
    }
    return 0;
}