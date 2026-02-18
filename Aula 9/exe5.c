/*Escreva  um  programa  que  leia  dois  vetores  de  1000  elementos  inteiros  cada.  A  seguir,  copie  intercalando  os 
elementos dos dois vetores para um terceiro vetor, de 2000 elementos. Isto significa que o primeiro elemento do primeiro 
vetor deve ser seguido pelo primeiro elemento do segundo vetor, seguido pelo segundo elemento do primeiro vetor, e 
assim por diante. 
Exemplo: considerando a leitura de dois vetores menores, de 3 elementos cada, cujos conteúdos são 1 2 3 e 4 5 6, o 
vetor resultante deve ser 1 4 2 5 3 6.*/
#include <stdio.h>
#define TAM 1000

int main() {
    int vetor1[TAM], vetor2[TAM], vetor3[2 * TAM];
    printf("Digite os elementos do primeiro vetor:\n");
    for (int i = 0; i < TAM; i++) {
        scanf("%d", &vetor1[i]);
    }
    printf("Digite os elementos do segundo vetor:\n");
    for (int i = 0; i < TAM; i++) {
        scanf("%d", &vetor2[i]);
    }
    for (int i = 0; i < TAM; i++) {
        vetor3[2 * i] = vetor1[i];  
        vetor3[2 * i + 1] = vetor2[i]; 
    }
    printf("Vetor intercalado:\n");
    for (int i = 0; i < 2 * TAM; i++) {
        printf("%d ", vetor3[i]);
    }
    printf("\n");
}