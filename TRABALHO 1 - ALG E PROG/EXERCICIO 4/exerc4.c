#include <stdio.h>

main() {
    int n, x, d1, d2, d3;
    int a, b, c;
    int menor, maior, temp;
    int passos, resultado;
    int falhou = 0;
    for (n = 100; n <= 998; n++) {
        d1 = n / 100;
        d2 = (n / 10) % 10;
        d3 = n % 10;
        if (d1 == d2 && d2 == d3) {
            continue;
        }
        x = n;
        passos = 0;
        while (x != 495 && passos < 100) {
            d1 = x / 100;
            d2 = (x / 10) % 10;
            d3 = x % 10;
            a = d1;
            b = d2;
            c = d3;
            if (a > b) { temp = a; a = b; b = temp; }
            if (a > c) { temp = a; a = c; c = temp; }
            if (b > c) { temp = b; b = c; c = temp; }
            menor = a * 100 + b * 10 + c;
            maior = c * 100 + b * 10 + a;
            x = maior - menor;
            passos++;
        }
        if (x != 495) {
            printf("Falha com: %d\n", n);
            falhou = 1;
        }
    }
    if (!falhou) {
        printf("Todos os numeros validos chegaram a 495!\n");
    }
}
