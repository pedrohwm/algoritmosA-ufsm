/*Escreva um programa que leia um número inteiro não negativo e coloque em outra variável o 
valor  inteiro  cuja  representação  decimal  possui  os  mesmos  dígitos  que  a  representação 
decimal do valor lido, porém em ordem inversa. 
Ex: lido o valor 235, o resultado deve ser o valor inteiro 532.*/
#include <stdio.h>
int main() {
    int numero, numeroInvertido = 0;
    printf("Digite um número inteiro não negativo: ");
    scanf("%d", &numero);
    while (numero != 0) {
        int digito = numero % 10;
        numeroInvertido = numeroInvertido * 10 + digito;
        numero /= 10;
    }
    printf("Número com os dígitos em ordem inversa: %d\n", numeroInvertido);
    return 0;
}