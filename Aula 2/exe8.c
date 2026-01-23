/*Escreva um programa para avaliar quem foi o vencedor de uma rodada do jogo “Pedra, Papel e Tesoura” 
com dois jogadores. O programa deve ler a jogada de cada um dos dois jogadores, que pode ser papel (1), 
pedra (2), ou tesoura (3), e escrever na tela quem foi o vencedor, ou se houve empate. */
#include <stdio.h>
int main() {
    int jogador1, jogador2;
    printf("Jogador 1, digite sua jogada (1-Papel, 2-Pedra, 3-Tesoura): ");
    scanf("%d", &jogador1);
    printf("Jogador 2, digite sua jogada (1-Papel, 2-Pedra, 3-Tesoura): ");
    scanf("%d", &jogador2);
    if (jogador1 == jogador2) {
        printf("Empate!\n");
    } else if ((jogador1 == 1 && jogador2 == 2) || 
               (jogador1 == 2 && jogador2 == 3) || 
               (jogador1 == 3 && jogador2 == 1)) {
        printf("Jogador 1 venceu!\n");
    } else if ((jogador2 == 1 && jogador1 == 2) || 
               (jogador2 == 2 && jogador1 == 3) || 
               (jogador2 == 3 && jogador1 == 1)) {
        printf("Jogador 2 venceu!\n");
    } else {
        printf("Jogada invalida!\n");
    }
    return 0;
}