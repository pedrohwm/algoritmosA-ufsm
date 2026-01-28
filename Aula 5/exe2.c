/*Escrever um programa que lê 15 valores, um de cada vez, e conta quantos deles estão no 
intervalo [10,20], quantos estão dentro do intervalo [26,30] e quantos deles estão fora destes 
intervalos, mostrando estas informações.*/
#include <stdio.h>
int main() {
    int valor;
    int cont_10_20 = 0;
    int cont_26_30 = 0;
    int cont_fora = 0;
    for (int i = 0; i < 15; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &valor);

        if (valor >= 10 && valor <= 20) {
            cont_10_20++;
        } else if (valor >= 26 && valor <= 30) {
            cont_26_30++;
        } else {
            cont_fora++;
        }
    }
    printf("Quantidade de valores no intervalo [10,20]: %d\n", cont_10_20);
    printf("Quantidade de valores no intervalo [26,30]: %d\n", cont_26_30);
    printf("Quantidade de valores fora dos intervalos: %d\n", cont_fora);
}