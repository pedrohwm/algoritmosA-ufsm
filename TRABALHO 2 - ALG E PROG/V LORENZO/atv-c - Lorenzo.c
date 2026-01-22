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

    int linha, coluna, soma = 0; // Variáveis para posição atual e soma acumulada
    char mov;                    // Movimento do usuário (C, B, E, D, S)

    // Solicita posição inicial ao usuário
    printf("Digite a linha inicial (0-9): ");
    scanf("%d", &linha);
    printf("Digite a coluna inicial (0-9): ");
    scanf("%d", &coluna);

    // Verifica se a posição inicial está dentro dos limites da matriz
    if (linha < 0 || linha > 9 || coluna < 0 || coluna > 9) {
        printf("Posicao inicial invalida.\n");
        return 1; // Encerra programa se posição inválida
    }

    soma = matriz[linha][coluna]; // Inicializa soma com o valor da posição inicial
    printf("Valor inicial: %d\nPosicao atual: [%d][%d]\n", soma, linha, coluna);

    // Array para guardar os últimos dois movimentos, evitando desfazer movimentos
    char movs_anteriores[2] = {'\0','\0'};
    int num_movs = 0; // Quantidade de movimentos registrados

    while (1) {
        // Solicita o próximo movimento
        printf("Proximo movimento (Cima: C, Baixo: B, Esquerda: E, Direita: D, Sair: S): ");
        scanf(" %c", &mov);

        // Converte minúsculas para maiúsculas para facilitar comparações
        if (mov >= 'a' && mov <= 'z') {
            mov = mov - 'a' + 'A';
        }

        if (mov == 'S') break; // Sai do loop se usuário escolher sair

        int linha_ant = linha, coluna_ant = coluna; // Salva posição antiga para possível desfazer

        // Atualiza posição conforme movimento
        switch (mov) {
            case 'C': linha--; break; // Move para cima
            case 'B': linha++; break; // Move para baixo
            case 'E': coluna--; break; // Move para esquerda
            case 'D': coluna++; break; // Move para direita
            default:
                printf("Movimento invalido.\n"); // Movimento não reconhecido
                continue; // Volta para pedir movimento novamente
        }

        // Verifica se nova posição está dentro dos limites da matriz
        if (linha < 0 || linha > 9 || coluna < 0 || coluna > 9) {
            printf("Movimento invalido (fora da matriz).\n");
            linha = linha_ant; // Restaura posição antiga
            coluna = coluna_ant;
            continue; // Pede movimento novamente
        }

        // Verifica se o movimento desfaz um dos dois últimos movimentos
        if (num_movs >= 2) {
            if ((mov == 'C' && (movs_anteriores[0] == 'B' || movs_anteriores[1] == 'B')) ||
                (mov == 'B' && (movs_anteriores[0] == 'C' || movs_anteriores[1] == 'C')) ||
                (mov == 'E' && (movs_anteriores[0] == 'D' || movs_anteriores[1] == 'D')) ||
                (mov == 'D' && (movs_anteriores[0] == 'E' || movs_anteriores[1] == 'E'))) {
                printf("Movimento invalido (desfaz movimento anterior).\n");
                linha = linha_ant; // Restaura posição antiga
                coluna = coluna_ant;
                continue; // Solicita movimento novamente
            }
        }

        // Acumula valor da nova posição
        soma += matriz[linha][coluna];
        // Mostra valor acumulado e posição atual
        printf("Valor atual: %d\nPosicao atual: [%d][%d]\n", soma, linha, coluna);

        // Atualiza vetor de movimentos anteriores
        if (num_movs < 2) movs_anteriores[num_movs++] = mov;
        else {
            movs_anteriores[0] = movs_anteriores[1];
            movs_anteriores[1] = mov;
        }
    }

    // Mostra soma total dos valores do caminho percorrido
    printf("Soma total do caminho: %d\n", soma);
    return 0; // Encerra programa com sucesso
}
