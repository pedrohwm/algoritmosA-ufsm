#include <stdio.h>

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

    int movimentos[4][2] = {  // Define as quatro direções possíveis de movimento
        {-1, 0},
        { 1, 0},
        { 0,-1},
        { 0, 1} 
    };

    int menor_valor, menor_linha, menor_coluna;  // Variáveis para armazenar o menor valor encontrado e suas coordenadas

    soma += matriz[linha][coluna]; // Adiciona o valor inicial à soma
    visitado[linha][coluna] = 1; // Marca a posição inicial como visitada
    printf("Caminho percorrido: %d ", matriz[linha][coluna]); // Exibe o valor inicial

    while (linha > 0 && linha < 9 && coluna > 0 && coluna < 9) { // Continua enquanto estiver dentro dos limites da matriz
        menor_valor = 9999; // Inicializa com um valor alto para encontrar o menor valor
        menor_linha = -1; // Inicializa com -1 para indicar que ainda não foi encontrado um menor valor
        menor_coluna = -1; // Inicializa com -1 para indicar que ainda não foi encontrado um menor valor

        for (i = 0; i < 4; i++) { // Percorre as quatro direções possíveis
            int nova_linha = linha + movimentos[i][0]; // Calcula a nova linha com base no movimento
            int nova_coluna = coluna + movimentos[i][1]; // Calcula a nova coluna com base no movimento

            if (nova_linha >= 0 && nova_linha < 10 && // Verifica se a nova linha está dentro dos limites da matriz
                nova_coluna >= 0 && nova_coluna < 10 && // Verifica se a nova coluna está dentro dos limites da matriz
                !visitado[nova_linha][nova_coluna]) { // Verifica se a posição ainda não foi visitada

                if (matriz[nova_linha][nova_coluna] < menor_valor) { // Se o valor na nova posição for menor que o menor valor encontrado
                    menor_valor = matriz[nova_linha][nova_coluna]; // Atualiza o menor valor encontrado
                    menor_linha = nova_linha; // Atualiza a linha do menor valor
                    menor_coluna = nova_coluna; // Atualiza a coluna do menor valor
                }
            }
        }

        if (menor_linha == -1) { // Se não foi encontrado nenhum movimento válido
            break;
        }

        linha = menor_linha; // Atualiza a linha para a posição do menor valor encontrado
        coluna = menor_coluna; // Atualiza a coluna para a posição do menor valor encontrado

        soma += matriz[linha][coluna]; // Adiciona o valor do menor valor encontrado à soma
        visitado[linha][coluna] = 1; // Marca a nova posição como visitada

        printf("%d ", matriz[linha][coluna]); // Exibe o valor do menor valor encontrado
    }

    printf("\nSoma dos valores do caminho: %d\n", soma);
}