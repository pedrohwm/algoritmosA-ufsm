#include <stdio.h>

int main() {
    int a, b, c, d;
    printf("Digite os valores de a, b, c e d: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int melhor_valor = 0, maior_divisores = 0, encontrou = 0;
    for (int i = a; i <= b; i++) {
        int divisores = 0;
        for (int j = c; j <= d; j++) {
            if (j != 0 && i % j == 0) {
                divisores++;
            }
        }
        if (divisores > maior_divisores) {
            melhor_valor = i;
            maior_divisores = divisores;
            encontrou = 1;
        } else if (divisores == maior_divisores && divisores > 0) {
            if (i < melhor_valor) {
                melhor_valor = i;
            }
        }
    }
    if (encontrou) {
        printf("O valor entre %d e %d que e divisivel pelo maior numero de valores entre %d e %d e: %d\n", a, b, c, d, melhor_valor);
    } else {
        printf("Nenhum valor entre %d e %d e divisivel por qualquer valor entre %d e %d.\n", a, b, c, d);
    }
}
