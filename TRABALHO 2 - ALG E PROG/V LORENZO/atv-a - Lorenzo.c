#include <stdio.h> // Biblioteca padrão para entrada/saída

int main() {
    // Matriz fixa 10x10 com valores já preenchidos
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

    int linha = 1, coluna = 1, soma = 0, i;
    // Define a posição inicial do caminho (linha 1, coluna 1)
    // 'soma' acumula o total dos valores visitados
    // 'i' será usado para iterar os movimentos possíveis

    int visitado[10][10] = {0};
    // Matriz para marcar posições já visitadas (0 = não visitado, 1 = visitado)

    int movimentos[4][2] = {
        {-1, 0}, // cima
        {1, 0},  // baixo
        {0, -1}, // esquerda
        {0, 1}   // direita
    };
    // Vetor com as mudanças de coordenadas para os 4 movimentos possíveis

    int menor_linha, menor_coluna, menor_valor;
    // Variáveis para guardar a posição do menor valor vizinho e seu valor

    soma += matriz[linha][coluna];  // Soma o valor da posição inicial
    visitado[linha][coluna] = 1;    // Marca a posição inicial como visitada
    printf("Caminho percorrido: %d ", matriz[linha][coluna]);

    // Loop enquanto a posição atual não estiver na borda da matriz (exclui bordas)
    while(linha > 0 && linha < 9 && coluna > 0 && coluna < 9) {
        menor_valor = 101;   // Inicializa com valor maior que qualquer na matriz
        menor_linha = -1;    // Indica que ainda não encontrou vizinho válido
        menor_coluna = -1;

        // Verifica os 4 vizinhos (cima, baixo, esquerda, direita)
        for(i = 0; i < 4; i++) {
            int nl = linha + movimentos[i][0]; // calcula linha vizinha
            int nc = coluna + movimentos[i][1]; // calcula coluna vizinha

            // Confirma se a vizinha está dentro da matriz e não foi visitada
            if(nl >= 0 && nl < 10 && nc >= 0 && nc < 10 && !visitado[nl][nc]) {
                // Verifica se o valor dessa vizinha é menor que o menor atual
                if(matriz[nl][nc] < menor_valor) {
                    menor_valor = matriz[nl][nc]; // atualiza menor valor
                    menor_linha = nl;              // atualiza linha do menor valor
                    menor_coluna = nc;             // atualiza coluna do menor valor
                }
            }
        }

        // Se nenhum vizinho válido foi encontrado, encerra o loop
        if(menor_linha == -1) break;

        // Atualiza a posição atual para o vizinho com menor valor
        linha = menor_linha;
        coluna = menor_coluna;

        soma += matriz[linha][coluna];    // Acumula o valor do novo ponto no caminho
        visitado[linha][coluna] = 1;      // Marca a nova posição como visitada

        printf("%d ", matriz[linha][coluna]); // Imprime o valor visitado no caminho
    }

    // Exibe a soma total dos valores do caminho percorrido
    printf("\nSoma dos valores do caminho: %d\n", soma);
    return 0;
}
