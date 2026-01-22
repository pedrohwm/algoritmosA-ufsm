#include <stdio.h> // Biblioteca padrão para entrada e saída

int main() {
    // Matriz 10x10 inicializada com valores fixos
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

    char mov;                     // Variável para receber o movimento do usuário
    int linha = 1, coluna = 1;    // Posição inicial na matriz (linha 1, coluna 1)
    int soma = matriz[linha][coluna];  // Soma acumulada inicializada com o valor da posição inicial
    int visitado[10][10] = {0};   // Matriz para marcar posições visitadas (0 = não visitada)
    visitado[linha][coluna] = 1;  // Marca posição inicial como visitada

    // Mostra a posição inicial e seu valor
    printf("Posicao corrente: [%d][%d] = %d\n", linha, coluna, matriz[linha][coluna]);

    while (1) { // Loop infinito até o usuário sair ou não poder mais se mover
        // Solicita o próximo movimento ao usuário
        printf("Proximo movimento (Cima: C, Baixo: B, Esquerda: E, Direita: D, Sair: S): ");
        scanf(" %c", &mov);  // Lê o caractere do movimento, ignorando espaços

        // Converte letras minúsculas para maiúsculas para facilitar comparação
        if (mov >= 'a' && mov <= 'z') {
            mov = mov - 'a' + 'A';
        }

        // Se o usuário escolher sair, interrompe o programa
        if (mov == 'S') {
            printf("Caminho interrompido pelo usuario.\n");
            break;
        }

        // Atualiza a posição de acordo com o movimento, só se dentro dos limites e não visitado
        if (mov == 'C' && linha > 0 && !visitado[linha-1][coluna]) linha--;
        else if (mov == 'B' && linha < 9 && !visitado[linha+1][coluna]) linha++;
        else if (mov == 'E' && coluna > 0 && !visitado[linha][coluna-1]) coluna--;
        else if (mov == 'D' && coluna < 9 && !visitado[linha][coluna+1]) coluna++;
        else {
            // Se movimento inválido, avisa e verifica se ainda existe movimento possível
            printf("Movimento invalido.\n");

            int podeMover = 0;
            // Verifica se há algum movimento possível para cima, baixo, esquerda ou direita
            if (linha > 0 && !visitado[linha-1][coluna]) podeMover = 1;
            if (linha < 9 && !visitado[linha+1][coluna]) podeMover = 1;
            if (coluna > 0 && !visitado[linha][coluna-1]) podeMover = 1;
            if (coluna < 9 && !visitado[linha][coluna+1]) podeMover = 1;

            // Se não há movimentos possíveis, termina o programa
            if (!podeMover) {
                printf("Nao ha movimentos possiveis. Fim do programa.\n");
                break;
            }
            // Se ainda pode mover, continua solicitando
            continue;
        }

        // Marca a nova posição como visitada e acumula o valor na soma
        visitado[linha][coluna] = 1;
        soma += matriz[linha][coluna];

        // Exibe a posição atual e o valor nela
        printf("Posicao corrente: [%d][%d] = %d\n", linha, coluna, matriz[linha][coluna]);
    }

    // Exibe o total acumulado da soma dos valores visitados
    printf("Soma dos valores do caminho: %d\n", soma);
    return 0;
}
