#include <stdio.h>   // Biblioteca para entrada e saída

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

    int i1, j1, i2, j2;            // Índices para percorrer a matriz
    int start, pos;                // Índice linear e posição de comparação
    int distHV, distDiag;          // Variáveis para armazenar as distâncias

    // Percorre a matriz linha por linha
    for (i1 = 0; i1 < 10; i1++) {
        for (j1 = 0; j1 < 10; j1++) {

            // Calcula o índice linear do próximo elemento para evitar dupla comparação
            start = i1 * 10 + j1 + 1;

            // Percorre os elementos seguintes da matriz para comparar
            for (pos = start; pos < 100; pos++) {
                i2 = pos / 10;    // Converte índice linear para linha
                j2 = pos % 10;    // Converte índice linear para coluna

                // Verifica se há valor repetido
                if (matriz[i1][j1] == matriz[i2][j2]) {
                    printf("Valor repetido: %d\n", matriz[i1][j1]);
                    printf("Posicao 1: [%d][%d]\n", i1, j1);
                    printf("Posicao 2: [%d][%d]\n", i2, j2);

                    // Calcula distância horizontal + vertical
                    distHV = abs(i1 - i2) + abs(j1 - j2);
                    printf("Distancia (horizontal/vertical): %d\n", distHV);

                    // Calcula distância diagonal (maior diferença entre linha e coluna)
                    distDiag = (abs(i1 - i2) > abs(j1 - j2)) ? abs(i1 - i2) : abs(j1 - j2);
                    printf("Distancia (diagonal): %d\n\n", distDiag);
                }
            }
        }
    }

    return 0;  // Encerra o programa
}

