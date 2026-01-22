/* Escreva um programa que leia um horário (hora, minuto e segundo) e mostre o horário um 
segundo  depois.  Por  exemplo,  se  o  horário  lido  for  12:34:25,  o  horário  mostrado  deve  ser 
12:34:26; se o horário lido for 12:59:59, o horário mostrado deve ser 13:00:00.*/
#include <stdio.h>
int main() {
    int hora, minuto, segundo;
    printf("Digite o horário (hora minuto segundo): ");
    scanf("%d %d %d", &hora, &minuto, &segundo);
    segundo++;
    if (segundo == 60) {
        segundo = 0;
        minuto++;
        if (minuto == 60) {
            minuto = 0;
            hora++;
            if (hora == 24) {
                hora = 0;
            }
        }
    }
    printf("O horário um segundo depois é: %02d:%02d:%02d\n", hora, minuto, segundo);
    return 0;
}