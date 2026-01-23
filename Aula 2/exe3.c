/*Escrever um programa que lê um horário hh:mm:ss e verifica se este está correto*/
#include <stdio.h>
int main() {
    int hh, mm, ss;
    printf("Digite o horario no formato hh:mm:ss: ");
    scanf("%d:%d:%d", &hh, &mm, &ss);
    if (hh >= 0 && hh < 24 && mm >= 0 && mm < 60 && ss >= 0 && ss < 60) {
        printf("O horario %02d:%02d:%02d esta correto.\n", hh, mm, ss);
    } else {
        printf("O horario %02d:%02d:%02d esta incorreto.\n", hh, mm, ss);
    }
    return 0;
}