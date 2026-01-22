#include <stdio.h>

main() {
    int valor, acumulador = 0;
    int somando = 1;
    printf("Digite uma serie de numeros (0 encerra):\n");
    while (1) {
        scanf("%d", &valor);
        if (valor == 0) {
            break;
        }
        if (valor == -1) {
            if (somando == 1) {
                somando = 0;
            } else {
                somando = 1;
            }
        } else if (valor > 0) {
            if (somando == 1) {
                acumulador = acumulador + valor;
            } else {
                acumulador = acumulador - valor;
            }
        }
    }
    printf("Valor final do acumulador: %d\n", acumulador);
}
