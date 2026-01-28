/*Existem números, chamados de números perfeitos, que apresentam a peculiar característica 
de terem valor igual à soma dos seus divisores (diferentes do próprio número). Como exemplo, 
podemos considerar o número 6, que pode ser dividido por 1, 2 e 3, números estes que 
somados resultam exatamente 6. Escreva um programa que mostre na tela todos os números 
entre 1 e 100 que apresentam esta característica.*/
#include <stdio.h>
int main() {
    printf("Números perfeitos entre 1 e 100:\n");
    for (int num = 1; num <= 100; num++) {
        int somaDivisores = 0;
        for (int divisor = 1; divisor < num; divisor++) {
            if (num % divisor == 0) {
                somaDivisores += divisor;
            }
        }
        if (somaDivisores == num) {
            printf("%d\n", num);
        }
    }
}