/*Escreva um programa que leia uma data (dia, mês e ano) e calcule e mostre a data do dia 
seguinte.*/
#include <stdio.h>
int main() {
    int dia, mes, ano;
    printf("Digite uma data (dia mes ano): ");
    scanf("%d %d %d", &dia, &mes, &ano);
    int dias_no_mes;
    if (mes == 2) {
        dias_no_mes = 28;
    } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        dias_no_mes = 30;
    } else {
        dias_no_mes = 31;
    }
    dia++;
    if (dia > dias_no_mes) {
        dia = 1;
        mes++;
        if (mes > 12) {
            mes = 1;
            ano++;
        }
    }
    printf("A data do dia seguinte e: %02d/%02d/%04d\n", dia, mes, ano);
    return 0;
}