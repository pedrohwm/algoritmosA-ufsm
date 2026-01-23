/*Escrever um programa que leia as coordenadas de três pontos em um plano cartesiano. Considerando que 
os dois primeiros pontos definem um retângulo de arestas paralelas aos eixos, verifique se o outro ponto está 
ou não dentro do retângulo.*/
#include <stdio.h>
int main() {
    int x1, y1, x2, y2, x3, y3;
    printf("Digite as coordenadas do primeiro ponto (x1 y1): ");
    scanf("%d %d", &x1, &y1);
    printf("Digite as coordenadas do segundo ponto (x2 y2): ");
    scanf("%d %d", &x2, &y2);
    printf("Digite as coordenadas do terceiro ponto (x3 y3): ");
    scanf("%d %d", &x3, &y3);
    int minX = (x1 < x2) ? x1 : x2;
    int maxX = (x1 > x2) ? x1 : x2;
    int minY = (y1 < y2) ? y1 : y2;
    int maxY = (y1 > y2) ? y1 : y2;
    if (x3 >= minX && x3 <= maxX && y3 >= minY && y3 <= maxY) {
        printf("O ponto (%d, %d) esta dentro do retangulo definido pelos pontos (%d, %d) e (%d, %d).\n", x3, y3, x1, y1, x2, y2);
    } else {
        printf("O ponto (%d, %d) esta fora do retangulo definido pelos pontos (%d, %d) e (%d, %d).\n", x3, y3, x1, y1, x2, y2);
    }
    return 0;
}