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
    int i, j, k, l;

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            for (k = 0; k < 10; k++) {
                for (l = 0; l < 10; l++) {
                    if (i == k && j == l) continue;
                    if (matriz[i][j] == matriz[k][l]) {
                        printf("Valor repetido: %d\n", matriz[i][j]);
                        printf("Posicao 1: [%d][%d]\n", i, j);
                        printf("Posicao 2: [%d][%d]\n", k, l);
                        printf("Distancia (horizontal/vertical): %d\n", abs(i - k) + abs(j - l));
                        printf("Distancia (diagonal): %d\n", (abs(i - k) > abs(j - l)) ? abs(i - k) : abs(j - l));
                        printf("\n");
                    }
                }
            }
        }
    }

    return 0;
}