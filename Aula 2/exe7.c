/*Escrever um programa que leia a hora de início de um evento e a hora de término, e calcule o tempo total 
decorrido. É possível que o evento tenha começado em um dia e terminado no seguinte, mas é sabido que não 
levou mais de 24h. Ignore os segundos.*/
#include <stdio.h>
int main() {
    int hi, mi, hf, mf;
    printf("Digite a hora de inicio (hh mm): ");
    scanf("%d %d", &hi, &mi);
    printf("Digite a hora de termino (hh mm): ");
    scanf("%d %d", &hf, &mf);
    int totalHoras, totalMinutos;
    if (mf < mi) {
        totalMinutos = (mf + 60) - mi;
        hf -= 1;
    } else {
        totalMinutos = mf - mi;
    }
    if (hf < hi) {
        totalHoras = (hf + 24) - hi;
    } else {
        totalHoras = hf - hi;
    }
    printf("Tempo total decorrido: %d horas e %d minutos.\n", totalHoras, totalMinutos);
    return 0;
}