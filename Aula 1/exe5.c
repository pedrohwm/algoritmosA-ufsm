/* Escrever  um  programa  que  leia  a  data  de  nascimento  de  uma  pessoa  e  a  data  atual  e 
calcule  o  número  de  dias  que  a  pessoa  já  viveu.  Para  simplificar,  considere  que  todos  os 
meses têm 30 dias, e todos os anos 365 dias.*/
#include <stdio.h>
int main() {
    int dia_nascimento, mes_nascimento, ano_nascimento;
    int dia_atual, mes_atual, ano_atual;
    int total_dias_vividos;
    printf("Digite a data de nascimento (dia mes ano): ");
    scanf("%d %d %d", &dia_nascimento, &mes_nascimento, &ano_nascimento);
    printf("Digite a data atual (dia mes ano): ");
    scanf("%d %d %d", &dia_atual, &mes_atual, &ano_atual);
    total_dias_vividos = (ano_atual - ano_nascimento) * 365;
    total_dias_vividos += (mes_atual - mes_nascimento) * 30;
    total_dias_vividos += (dia_atual - dia_nascimento);
    printf("A pessoa já viveu %d dias.\n", total_dias_vividos);
    return 0;
}