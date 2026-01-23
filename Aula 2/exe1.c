/*A temporada do basquete profissional nos Estados Unidos ocorre entre os meses de novembro e junho do 
ano seguinte. Escreva um programa que leia um mês (um número inteiro entre 1 e 12) e escreva na tela se a 
temporada está em andamento ou não*/
#include <stdio.h>
int main() {
    int mes;
    printf("Digite o numero do mes (1-12): ");
    scanf("%d", &mes);
    if (mes >= 11 || mes <= 6) {
        printf("A temporada de basquete esta em andamento.\n");
    } else {
        printf("A temporada de basquete nao esta em andamento.\n");
    }
    return 0;
}