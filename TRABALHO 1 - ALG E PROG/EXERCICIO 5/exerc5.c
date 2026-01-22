#include <stdio.h>

main() {
    int numero, temp, digito, i, repetido = 0;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    temp = numero;
    while (temp > 0 && !repetido) {
        digito = temp % 10;
        int temp2 = temp / 10;
        while (temp2 > 0) {
            if (digito == temp2 % 10) {
                repetido = 1;
                break;
            }
            temp2 /= 10;
        }
        temp /= 10;
    }
    if (!repetido) {
        temp = numero;
        while (temp > 0 && !repetido) {
            digito = temp % 16;
            int temp2 = temp / 16;
            while (temp2 > 0) {
                if (digito == temp2 % 16) {
                    repetido = 1;
                    break;
                }
                temp2 /= 16;
            }
            temp /= 16;
        }
    }
    if (repetido) {
        printf("O numero possui digitos repetidos em alguma notacao.\n");
    } else {
        printf("O numero nao possui digitos repetidos em nenhuma notacao.\n");
    }
}
