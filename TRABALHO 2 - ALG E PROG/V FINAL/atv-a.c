#include <stdio.h> // Biblioteca padrão para entrada/saída
#include <limits.h> // Para usar INT_MAX (maior valor inteiro possível)

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

    int linha = 1, coluna = 1, soma = 0, i; 
    int visitado[10][10] = {0};
    int movimentos[4][2] = {
        {-1, 0}, 
        { 1, 0}, 
        { 0,-1}, 
        { 0, 1}  
    };

    int menor_valor, menor_linha, menor_coluna; 

    soma += matriz[linha][coluna];
    visitado[linha][coluna] = 1;
    printf("Caminho percorrido: %d ", matriz[linha][coluna]);

    while (linha > 0 && linha < 9 && coluna > 0 && coluna < 9) {
        menor_valor = INT_MAX; 
        menor_linha = -1;    
        menor_coluna = -1;
        for (i = 0; i < 4; i++) {
            int nova_linha = linha + movimentos[i][0]; 
            int nova_coluna = coluna + movimentos[i][1]; 
            if (nova_linha >= 0 && nova_linha < 10 &&
                nova_coluna >= 0 && nova_coluna < 10 &&
                !visitado[nova_linha][nova_coluna]) {
                if (matriz[nova_linha][nova_coluna] < menor_valor) {
                    menor_valor = matriz[nova_linha][nova_coluna];
                    menor_linha = nova_linha;
                    menor_coluna = nova_coluna;
                }
            }
        }
        if (menor_linha == -1) 
            break;
        linha = menor_linha;
        coluna = menor_coluna;
        soma += matriz[linha][coluna];
        visitado[linha][coluna] = 1;
        printf("%d ", matriz[linha][coluna]);
    }

    printf("\nSoma dos valores do caminho: %d\n", soma);
}