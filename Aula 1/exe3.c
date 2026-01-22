/*Escrever  um  programa  que  leia  um  valor  em  Reais  e  calcule  o  menor  número  possível  de 
notas de R$100,00, R$50,00, R$20,00, R$10,00, R$5,00, R$2,00 e R$1,00 em que o valor lido 
pode ser decomposto. Ignore os centavos. O programa deve mostrar o número total de notas*/
#include <stdio.h>
int main() {
    int valor, notas_100, notas_50, notas_20, notas_10, notas_5, notas_2, notas_1;
    printf("Digite um valor em Reais: ");
    scanf("%d", &valor);
    notas_100 = valor / 100;
    valor %= 100;
    notas_50 = valor / 50;
    valor %= 50;
    notas_20 = valor / 20;
    valor %= 20;
    notas_10 = valor / 10;
    valor %= 10;
    notas_5 = valor / 5;
    valor %= 5;
    notas_2 = valor / 2;
    valor %= 2;
    notas_1 = valor;
    printf("Número de notas:\n");
    printf("R$100,00: %d\n", notas_100);
    printf("R$50,00: %d\n", notas_50);
    printf("R$20,00: %d\n", notas_20);
    printf("R$10,00: %d\n", notas_10);
    printf("R$5,00: %d\n", notas_5);
    printf("R$2,00: %d\n", notas_2);
    printf("R$1,00: %d\n", notas_1);
    return 0;
}