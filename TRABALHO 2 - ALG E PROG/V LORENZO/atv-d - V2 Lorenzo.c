#include <stdio.h>
#include <stdlib.h> // Necessário para usar abs()

int main() {
    // Declara e inicializa a matriz 10x10 com valores fixos
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

    int i1, j1, i2, j2;       // Índices para percorrer a matriz
    int start, pos;           // Variável para índice linear e controle de laço
    int distHV, distDiag;     // Variáveis para armazenar as distâncias calculadas

    // Percorre toda a matriz elemento por elemento (linha i1, coluna j1)
    for (i1 = 0; i1 < 10; i1++) {
        for (j1 = 0; j1 < 10; j1++) {

            // Calcula índice linear do próximo elemento para evitar dupla comparação
            start = i1 * 10 + j1 + 1;

            // Percorre os elementos seguintes da matriz para comparação
            for (pos = start; pos < 100; pos++) {
                i2 = pos / 10;    // Converte índice linear em índice da linha
                j2 = pos % 10;    // Converte índice linear em índice da coluna

                // Compara os valores dos elementos nas posições (i1,j1) e (i2,j2)
                if (matriz[i1][j1] == matriz[i2][j2]) {
                    printf("Valor repetido: %d\n", matriz[i1][j1]);
                    printf("Posicao 1: [%d][%d]\n", i1, j1);
                    printf("Posicao 2: [%d][%d]\n", i2, j2);

                    // Calcula distância horizontal + vertical entre os elementos
                    distHV = abs(i1 - i2) + abs(j1 - j2);
                    printf("Distancia (horizontal/vertical): %d\n", distHV);

                    // Calcula distância diagonal (maior entre diferença de linhas e colunas)
                    if (abs(i1 - i2) > abs(j1 - j2)) {
                        distDiag = abs(i1 - i2);
                    } else {
                        distDiag = abs(j1 - j2);
                    }
                    printf("Distancia (diagonal): %d\n\n", distDiag);
                }
            }
        }
    }

    return 0;  // Finaliza o programa
}


