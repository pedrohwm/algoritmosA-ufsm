/*Escreva um programa que realize a leitura de um valor positivo N. A seguir, o programa deve fazer a leitura de uma série de números inteiros positivos, interrompida pela leitura de um valor negativo. No seu final, o programa deve mostrar na tela quantos valores diferentes de N foram informados antes da ultima ocorrência de N na serie lida. Se o valor N não aparecer na sequência, deve ser mostrada uma mensagem explicitando a situação.*/
#include <stdio.h>
int main() {
    int n, valor;
    int contador = 0;
    int encontrouN = 0;
    printf("Digite um valor positivo N: ");
    scanf("%d", &n);
    printf("Digite uma serie de números inteiros positivos (um negativo para terminar):\n");
    while (1) {
        scanf("%d", &valor);
        if (valor < 0) {
            break;
        }
        if (valor == n) {
            encontrouN = 1;
            contador = 0;
        } else if (encontrouN) {
            contador++;
        }
    }
}