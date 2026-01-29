/*Escrever um programa que leia dois valores inteiros positivos e calcule e mostre, sem usar o 
operadores / e %, o quociente e o resto da divisão inteira do primeiro pelo segundo.*/
#include <stdio.h>
int main() {
    int dividendo, divisor, quociente = 0, resto;
    printf("Digite dois valores inteiros positivos (dividendo e divisor): ");
    scanf("%d %d", &dividendo, &divisor);
    resto = dividendo;
    while (resto >= divisor) {
        resto -= divisor;
        quociente++;
    }
    printf("O quociente de %d dividido por %d e: %d\n", dividendo, divisor, quociente);
    printf("O resto da divisao e: %d\n", resto);
}