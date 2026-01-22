#include <stdio.h>

main() {
    int h1, m1, s1;
    int h2, m2, s2;
    int total1, total2, media;
    int mh, mm, ms;

    printf("Digite o horario inicial (hh:mm:ss): ");
    scanf("%d:%d:%d", &h1, &m1, &s1);

    printf("Digite o horario final (hh:mm:ss): ");
    scanf("%d:%d:%d", &h2, &m2, &s2);

    total1 = h1 * 3600 + m1 * 60 + s1; // Converter tudo para segundos
    total2 = h2 * 3600 + m2 * 60 + s2;

    media = (total1 + total2) / 2; // Calcular a média

    mh = media / 3600;
    mm = (media % 3600) / 60; // Converter de volta para hora:minuto:segundo
    ms = media % 60;

    printf("Horario medio: %02d:%02d:%02d\n", mh, mm, ms); // 02d serve para imprimir dois digitos na tela, e preenche com zero a esquerda se for necessário.
}
