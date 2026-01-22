#include <stdio.h>

main() {
    int matriz[10][10] = { 12, 16, 18, 77, 45, 65, 34, 11, 81, 90,
                           51,  5, 15, 88, 13, 33, 17,  9, 10, 54,
                           89,  1,  7, 23, 34, 15, 16, 18, 20, 19,
                           22,  6, 83, 25, 20, 14, 21, 18, 17, 18,
                           19,  3, 18,  8, 49,  6, 66,  8, 17, 22,
                           45, 33,  9, 17, 55, 80,  9,  5, 22, 31,
                            2, 45,  2,  3, 96, 14, 100, 4, 76, 54,
                           90, 85,  1, 99, 16,  3, 15,  3,  4, 25,
                            8, 44, 43, 20,  5,  7, 13, 44, 39, 112,
                            1, 23, 21, 32,  9, 31, 31,  2, 56,  2 };
    char movimento; // Variável para armazenar o movimento do usuário
    int linha = 1, coluna = 1; // Posição inicial na matriz
    int soma = matriz[linha][coluna]; // Soma dos valores percorridos, iniciada com o valor da posição inicial
    int visitado[10][10] = {0}; // Matriz para marcar posições visitadas
    visitado[linha][coluna] = 1; // Marca a posição inicial como visitada

    printf("Posicao corrente: [%d][%d] = %d\n", linha, coluna, matriz[linha][coluna]); // Imprime a posição inicial e seu valor

    while (1) { //
        printf("Proximo movimento (Cima: C, Baixo: B, Esquerda: E, Direita: D, Sair: S): ");
        scanf(" %c", &movimento);

        if (movimento == 'S') { 
            printf("Caminho interrompido pelo usuario.\n");
            break;
        }

        if (movimento == 'C') {
            if (linha > 0 && !visitado[linha - 1][coluna]) {
                linha--;
            } else {
                printf("Movimento invalido.\n");
                if ((linha <= 0) || visitado[linha - 1][coluna]) {
                    int podeMover = 0;
                    if (linha < 9 && !visitado[linha + 1][coluna]) podeMover = 1;
                    if (coluna > 0 && !visitado[linha][coluna - 1]) podeMover = 1;
                    if (coluna < 9 && !visitado[linha][coluna + 1]) podeMover = 1;

                    if (!podeMover) {
                        printf("Nao ha movimentos possiveis. Fim do programa.\n");
                        goto fim;
                    }
                    continue;
                }
            }
        } else if (movimento == 'B') {
            if (linha < 9 && !visitado[linha + 1][coluna]) {
                linha++;
            } else {
                printf("Movimento invalido.\n");
                if ((linha >= 9) || visitado[linha + 1][coluna]) {
                    int podeMover = 0;
                    if (linha > 0 && !visitado[linha - 1][coluna]) podeMover = 1;
                    if (coluna > 0 && !visitado[linha][coluna - 1]) podeMover = 1;
                    if (coluna < 9 && !visitado[linha][coluna + 1]) podeMover = 1;

                    if (!podeMover) {
                        printf("Nao ha movimentos possiveis. Fim do programa.\n");
                        goto fim;
                    }
                    continue;
                }
            }
        } else if (movimento == 'E') {
            if (coluna > 0 && !visitado[linha][coluna - 1]) {
                coluna--;
            } else {
                printf("Movimento invalido.\n");
                if ((coluna <= 0) || visitado[linha][coluna - 1]) {
                    int podeMover = 0;
                    if (linha > 0 && !visitado[linha - 1][coluna]) podeMover = 1;
                    if (linha < 9 && !visitado[linha + 1][coluna]) podeMover = 1;
                    if (coluna < 9 && !visitado[linha][coluna + 1]) podeMover = 1;

                    if (!podeMover) {
                        printf("Nao ha movimentos possiveis. Fim do programa.\n");
                        goto fim;
                    }
                    continue;
                }
            }
        } else if (movimento == 'D') {
            if (coluna < 9 && !visitado[linha][coluna + 1]) {
                coluna++;
            } else {
                printf("Movimento invalido.\n");
                if ((coluna >= 9) || visitado[linha][coluna + 1]) {
                    int podeMover = 0;
                    if (linha > 0 && !visitado[linha - 1][coluna]) podeMover = 1;
                    if (linha < 9 && !visitado[linha + 1][coluna]) podeMover = 1;
                    if (coluna > 0 && !visitado[linha][coluna - 1]) podeMover = 1;

                    if (!podeMover) {
                        printf("Nao ha movimentos possiveis. Fim do programa.\n");
                        goto fim;
                    }
                    continue;
                }
            }
        } else {
            printf("Movimento invalido.\n");
            continue;
        }

        visitado[linha][coluna] = 1;
        soma += matriz[linha][coluna];
        printf("Posicao corrente: [%d][%d] = %d\n", linha, coluna, matriz[linha][coluna]);
    }

fim:
    printf("Soma dos valores do caminho: %d\n", soma);

    return 0;
}