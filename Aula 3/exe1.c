/*Escreva um programa que leia a data atual e duas datas de aniversário (todas datas como 
dia e mês) e, inicialmente, verifique se algum aniversário coincide com a data corrente ou se os 
aniversários são na mesma data. Caso todas as datas sejam diferentes entre si, informe qual 
dos dois aniversários está mais próximo de acontecer. Observe que o próximo aniversário não 
é necessariamente o mais próximo do início do ano. Por exemplo, se a data corrente é 10/06, e 
os aniversários lidos são 30/1 e 30/06, o primeiro aniversário é 30/06, pois o próximo 30/1 
acontecerá apenas no ano seguinte.*/
#include <stdio.h>
int main() {
    int dia_atual, mes_atual;
    int dia_aniv1, mes_aniv1;
    int dia_aniv2, mes_aniv2;
    printf("Digite a data atual (dia mes): ");
    scanf("%d %d", &dia_atual, &mes_atual);
    printf("Digite o primeiro aniversario (dia mes): ");
    scanf("%d %d", &dia_aniv1, &mes_aniv1);
    printf("Digite o segundo aniversario (dia mes): ");
    scanf("%d %d", &dia_aniv2, &mes_aniv2);
    if (dia_atual == dia_aniv1 && mes_atual == mes_aniv1) {
        printf("O primeiro aniversario coincide com a data atual.\n");
        return 0;
    }
    if (dia_atual == dia_aniv2 && mes_atual == mes_aniv2) {
        printf("O segundo aniversario coincide com a data atual.\n");
        return 0;
    }
    if (dia_aniv1 == dia_aniv2 && mes_aniv1 == mes_aniv2) {
        printf("Os aniversarios sao na mesma data.\n");
        return 0;
    }
    int dias_ate_aniv1 = (mes_aniv1 - mes_atual) * 30 + (dia_aniv1 - dia_atual);
    int dias_ate_aniv2 = (mes_aniv2 - mes_atual) * 30 + (dia_aniv2 - dia_atual);
    if (dias_ate_aniv1 < 0) {
        dias_ate_aniv1 += 360;
    }
    if (dias_ate_aniv2 < 0) {
        dias_ate_aniv2 += 360;
    }
    if (dias_ate_aniv1 < dias_ate_aniv2) {
        printf("O primeiro aniversario esta