/*Escreva um programa que encontre e mostre todos os números entre 10 e 9999 que são 
capicua (seqüência de algarismos permanece a mesma se lida na ordem direta ou inversa) em 
sua notação decimal. 
Exemplos de capicua: 33, 272, 4884.*/
#include <stdio.h>
int main() {
    printf("Numeros capicua entre 10 e 9999:\n");
    for (int num = 10; num <= 9999; num++) {
        int original = num;
        int invertido = 0;
        while (original != 0) {
            int digito = original % 10;
            invertido = invertido * 10 + digito;
            original /= 10;
        }
        if (num == invertido) {
            printf("%d\n", num);
        }
    }
}