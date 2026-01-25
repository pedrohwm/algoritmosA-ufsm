/*Escreva um programa que leia dois horários (hora e minuto) e verifique se o intervalo entre 
eles é igual, superior ou inferior a uma hora. Considere que o primeiro horário informado indica 
o começo do intervalo, o segundo indica o seu final, e o intervalo não é superior a um dia.*/
#include <stdio.h>
int main() {
    int hora_inicio, minuto_inicio;
    int hora_fim, minuto_fim;
    int total_minutos_inicio, total_minutos_fim, intervalo_minutos;
    printf("Digite o horário de início (hora minuto): ");
    scanf("%d %d", &hora_inicio, &minuto_inicio);
    printf("Digite o horário de fim (hora minuto): ");
    scanf("%d %d", &hora_fim, &minuto_fim);
    total_minutos_inicio = hora_inicio * 60 + minuto_inicio;
    total_minutos_fim = hora_fim * 60 + minuto_fim;
    intervalo_minutos = total_minutos_fim - total_minutos_inicio;
    if (intervalo_minutos > 60) {
        printf("O intervalo é superior a uma hora.\n");
    } else if (intervalo_minutos < 60) {
        printf("O intervalo é inferior a uma hora.\n");
    } else {
        printf("O intervalo é igual a uma hora.\n");
    }
    return 0;
}