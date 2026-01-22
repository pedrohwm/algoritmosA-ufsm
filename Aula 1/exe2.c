/*Escrever um programa que leia dois valores numéricos, um representando o valor do salário 
de  um  trabalhador  e  o  outro  o  percentual  de  reajuste  que  este  salário  deve  receber.  O 
programa deve calcular e mostrar na tela o salário após o reajuste.*/
#include <stdio.h>
int main() {
    float salario, percentual_reajuste, salario_reajustado;
    printf("Digite o valor do salário do trabalhador: ");
    scanf("%f", &salario);
    printf("Digite o percentual de reajuste: ");
    scanf("%f", &percentual_reajuste);
    salario_reajustado = salario + (salario * (percentual_reajuste / 100));
    printf("O salário após o reajuste é: R$ %.2f\n", salario_reajustado);
    return 0;
}