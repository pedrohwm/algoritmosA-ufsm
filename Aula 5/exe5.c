/*Escrever um programa que leia um valor inteiro e calcule e mostre a soma de todos os 
dígitos da representação decimal deste número. Por exemplo, a soma dos dígitos de 432 é 9 (4 
+ 3 + 2). Lembre-se: para 432 / 10, quociente 43 e resto 2.*/
#include <stdio.h>
int main() {
    int numero, soma_digitos = 0;
    printf("Digite um valor inteiro: ");
    scanf("%d", &numero);
    while (numero != 0) {
        int digito = numero % 10;
        soma_digitos += digito;
        numero /= 10;
    }
    printf("A soma dos dígitos é: %d\n", soma_digitos);
}