#include <stdio.h> 
#include <stdlib.h> 

int main() {
    int matriz[10][10] = {
        {12, 16, 18, 77, 45, 65, 34, 11, 81, 90},
        {51,  5, 15, 88, 13, 33, 17,  9, 10, 54},
        {89,  1,  7, 23, 34, 15, 16, 18, 20, 19},
        {22,  6, 83, 25, 20, 14, 21, 18, 17, 18},
        {19,  3, 18,  8, 49,  6, 66,  8, 17, 22},
        {45, 33,  9, 17, 55, 80,  9,  5, 22, 31},
        { 2, 45,  2,  3, 96, 14, 100, 4, 76, 54},
        {90, 85,  1, 99, 16,  3, 15,  3,  4, 25},
        { 8, 44, 43, 20,  5,  7, 13, 44, 39, 112},
        { 1, 23, 21, 32,  9, 31, 31,  2, 56,  2}
    };

    int i1, j1;
    int i2, j2; 
    int dist_hv; 
    int dist_diag; 

    for (i1 = 0; i1 < 10; i1++) { // Percorre as linhas da matriz
        for (j1 = 0; j1 < 10; j1++) { // Percorre as colunas da matriz

            for (i2 = i1; i2 < 10; i2++) { // Percorre as linhas novamente, começando da linha atual
                int inicio_col = (i2 == i1) ? (j1 + 1) : 0; // Inicia a coluna a partir da próxima coluna se for a mesma linha
                for (j2 = inicio_col; j2 < 10; j2++) { // Percorre as colunas novamente, começando da coluna atual ou da próxima coluna

                    if (matriz[i1][j1] == matriz[i2][j2]) { // Verifica se os valores são iguais
                        printf("Valor repetido encontrado: %d\n", matriz[i1][j1]); // Exibe o valor repetido
                        printf("  Posicao 1: [%d][%d]\n", i1, j1); // Exibe a posição do primeiro valor repetido
                        printf("  Posicao 2: [%d][%d]\n", i2, j2); // Exibe a posição do segundo valor repetido

                        dist_hv = abs(i1 - i2) + abs(j1 - j2); // Calcula a distância horizontal/vertical
                        printf("  Distancia (horizontal/vertical): %d\n", dist_hv); // Exibe a distância horizontal/vertical

                        int diff_linha = abs(i1 - i2); // Calcula a diferença de linhas
                        int diff_coluna = abs(j1 - j2); // Calcula a diferença de colunas

                        dist_diag = (diff_linha > diff_coluna) ? diff_linha : diff_coluna; // Calcula a distância diagonal
                        printf("  Distancia (diagonal): %d\n\n", dist_diag); // Exibe a distância diagonal
                    }
                }
            }
        }
    }
}