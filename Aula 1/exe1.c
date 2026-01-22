/*Escreva um programa que leia dois valores inteiros, um representando o número total de
elementos de uma amostragem, e outro representando uma fração desta amostragem. A
seguir, o programa deve calcular a porcentagem representada pela fração e retornar este valor.*/
#include <stdio.h>
int main() {
    int total_elements, fraction;
    float percentage;
    printf("Digite o número total de elementos da amostragem: ");
    scanf("%d", &total_elements);
    printf("Digite a fração da amostragem: ");
    scanf("%d", &fraction);
    if (total_elements != 0) {
        percentage = ((float)fraction / total_elements) * 100;
        printf("A porcentagem representada pela fração é: %.2f%%\n", percentage);
    } else {
        printf("O número total de elementos não pode ser zero.\n");
    }
    return 0;
}