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

    char movimento;
    int linha = 1, coluna = 1, soma = 0; 
    int visitado[10][10] = {0};

    soma += matriz[linha][coluna]; // Adiciona o valor inicial à soma
    visitado[linha][coluna] = 1; // Marca a posição inicial como visitada

    printf("Posicao corrente: [%d][%d] = %d\n", linha, coluna, matriz[linha][coluna]); // Exibe o valor inicial

    while (1) {
        printf("Proximo movimento (Cima: C, Baixo: B, Esquerda: E, Direita: D, Sair: S): ");
        scanf(" %c", &movimento);

        if (movimento >= 'a' && movimento <= 'z') { // Converte letras minúsculas para maiúsculas
            movimento = movimento - 'a' + 'A';
        }

        if (movimento == 'S') { // Se o usuário digitar 'S', o programa termina
            printf("Caminho interrompido pelo usuario.\n");
            break; 
        }

        int proxima_linha = linha, proxima_coluna = coluna, movimento_valido = 1; 

        switch (movimento) { // Verifica o movimento solicitado
            case 'C': 
                proxima_linha--; 
                break;
            case 'B':
                proxima_linha++;
                break;
            case 'E':
                proxima_coluna--;
                break;
            case 'D':
                proxima_coluna++;
                break;
            default: // Se o movimento não for válido, exibe mensagem de erro
                printf("Movimento invalido. Por favor, digite C, B, E, D ou S.\n");
                movimento_valido = 0; // Marca o movimento como inválido
                break;
        }

        if (movimento_valido) { // Se o movimento for válido
            if (proxima_linha >= 0 && proxima_linha < 10 && // Verifica se a nova linha está dentro dos limites da matriz
                proxima_coluna >= 0 && proxima_coluna < 10 && // Verifica se a nova coluna está dentro dos limites da matriz
                !visitado[proxima_linha][proxima_coluna]) { // Verifica se a posição ainda não foi visitada

                linha = proxima_linha; // Atualiza a linha para a nova posição
                coluna = proxima_coluna; // Atualiza a coluna para a nova posição
                visitado[linha][coluna] = 1; // Marca a nova posição como visitada
                soma += matriz[linha][coluna]; // Adiciona o valor da nova posição à soma

                printf("Posicao corrente: [%d][%d] = %d\n", linha, coluna, matriz[linha][coluna]);
                
            } else {
                printf("Movimento invalido (fora da matriz ou ja visitado).\n"); // Se a nova posição não for válida, exibe mensagem de erro
                movimento_valido = 0; // Marca o movimento como inválido
            }
        }

        if (movimento_valido) { // Se o movimento foi válido e a posição foi atualizada
            int pode_mover = 0;
            if (linha > 0 && !visitado[linha - 1][coluna]) pode_mover = 1; // Verifica se é possível mover para cima
            if (linha < 9 && !visitado[linha + 1][coluna]) pode_mover = 1; // Verifica se é possível mover para baixo
            if (coluna > 0 && !visitado[linha][coluna - 1]) pode_mover = 1; // Verifica se é possível mover para a esquerda
            if (coluna < 9 && !visitado[linha][coluna + 1]) pode_mover = 1; // Verifica se é possível mover para a direita

            if (!pode_mover) { // Se não há movimentos possíveis
                printf("Nao ha movimentos possiveis. Fim do programa.\n");
                break;
            }
        }
    }
    printf("Soma dos valores do caminho: %d\n", soma);
}