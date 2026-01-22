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
    int caminho[100]; // Array para armazenar o caminho percorrido
    int caminho_len = 0; // Contador de elementos no caminho
    int linha = 1, coluna = 1; // Posição inicial
    int soma = 0; // Soma dos valores percorridos
    int i, j; // Variáveis de controle para loops
    int menor_valor, menor_linha, menor_coluna; // Variáveis para armazenar o menor valor encontrado e sua posição
    int visitado[10][10] = {0}; // Matriz para marcar posições visitadas

    caminho[caminho_len++] = matriz[linha][coluna]; // Adiciona o valor inicial ao caminho
    soma += matriz[linha][coluna]; // Soma o valor inicial
    visitado[linha][coluna] = 1; // Marca a posição inicial como visitada

    printf("Caminho percorrido: %d ", matriz[linha][coluna]); // Imprime o valor inicial

    while (linha > 0 && linha < 9 && coluna > 0 && coluna < 9) { // Continua enquanto estiver dentro dos limites da matriz
        menor_valor = 101; // Inicializa o menor valor com um valor maior que qualquer elemento da matriz
        menor_linha = -1;  // Inicializa a linha do menor valor como inválida
        menor_coluna = -1; //  Inicializa a coluna do menor valor como inválida

        int movimentos[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}}; // Movimentos possíveis: Cima, Baixo, Esquerda, Direita

        for (i = 0; i < 4; i++) { // Itera sobre os movimentos possíveis
            int nova_linha = linha + movimentos[i][0]; // Calcula a nova linha com base no movimento atual
            int nova_coluna = coluna + movimentos[i][1]; // Calcula a nova coluna com base no movimento atual

            if (nova_linha >= 0 && nova_linha < 10 && nova_coluna >= 0 && nova_coluna < 10 && !visitado[nova_linha][nova_coluna]) { // Verifica se a nova posição está dentro dos limites da matriz e não foi visitada
                if (matriz[nova_linha][nova_coluna] < menor_valor) { // Se o valor na nova posição for menor que o menor valor encontrado até agora
                    menor_valor = matriz[nova_linha][nova_coluna]; // Atualiza o menor valor
                    menor_linha = nova_linha; // Atualiza a linha do menor valor
                    menor_coluna = nova_coluna; // Atualiza a coluna do menor valor
                }
            }
        }

        if (menor_linha == -1) { // Se não houver movimentos válidos (nenhum valor menor encontrado)
            break;
        }
 
        coluna = menor_coluna; // Atualiza a coluna para a posição do menor valor encontrado

        caminho[caminho_len++] = matriz[linha][coluna]; // Adiciona o valor do menor caminho ao array de caminho
        soma += matriz[linha][coluna]; // Soma o valor do menor caminho
        visitado[linha][coluna] = 1; // Marca a posição atual como visitada

        printf("%d ", matriz[linha][coluna]); // Imprime o valor do menor caminho encontrado
    }

    printf("\nSoma dos valores do caminho: %d\n", soma); 
}