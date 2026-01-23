/*Escreva um programa que leia um valor inteiro representando um ano e informe na tela se o ano e bissexto 
ou não. */
#include <stdio.h>
int main() {
    int ano;
    printf("Digite um ano: ");
    scanf("%d", &ano);
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        printf("O ano %d e bissexto.\n", ano);
    } else {
        printf("O ano %d nao e bissexto.\n", ano);
    }
    return 0;
}