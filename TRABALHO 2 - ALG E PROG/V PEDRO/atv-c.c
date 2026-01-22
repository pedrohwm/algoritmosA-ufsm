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
    int linha, coluna, soma = 0;
    char movimento;

    printf("Digite a linha inicial (0-9): ");
    scanf("%d", &linha);
    printf("Digite a coluna inicial (0-9): ");
    scanf("%d", &coluna);

    if (linha < 0 || linha > 9 || coluna < 0 || coluna > 9) {
        printf("Posição inicial inválida.\n");
        return 1;
    }

    soma = matriz[linha][coluna];
    printf("Valor inicial: %d\n", soma);

    char movimentos_anteriores[2] = {'\0', '\0'};
    int num_movimentos = 0;
    
    while (1) {
        printf("Digite o movimento (Cima: C, Baixo: B, Esquerda: E, Direita: D, Sair: S): ");
        scanf(" %c", &movimento);

        if (movimento == 'S') {
            break;
        }

        int linha_anterior = linha;
        int coluna_anterior = coluna;

        switch (movimento) {
            case 'C':
                linha--;
                break;
            case 'B':
                linha++;
                break;
            case 'E':
                coluna--;
                break;
            case 'D':
                coluna++;
                break;
            default:
                printf("Movimento inválido.\n");
                continue;
        }

        if (linha < 0 || linha > 9 || coluna < 0 || coluna > 9) {
            printf("Movimento inválido (fora da matriz).\n");
            linha = linha_anterior;
            coluna = coluna_anterior;
            continue;
        }

        if (num_movimentos >= 2) {
            if ((movimento == 'C' && movimentos_anteriores[1] == 'B') ||
                (movimento == 'B' && movimentos_anteriores[1] == 'C') ||
                (movimento == 'E' && movimentos_anteriores[1] == 'D') ||
                (movimento == 'D' && movimentos_anteriores[1] == 'E') ||
                (movimento == 'C' && movimentos_anteriores[0] == 'B') ||
                (movimento == 'B' && movimentos_anteriores[0] == 'C') ||
                (movimento == 'E' && movimentos_anteriores[0] == 'D') ||
                (movimento == 'D' && movimentos_anteriores[0] == 'E'))
            {
                printf("Movimento invalido (desfaz movimento anterior).\n");
                linha = linha_anterior;
                coluna = coluna_anterior;
                continue;
            }
        }

        soma += matriz[linha][coluna];
        printf("Valor atual: %d\n", soma);

        if (num_movimentos < 2) {
            movimentos_anteriores[num_movimentos] = movimento;
        } else {
            movimentos_anteriores[0] = movimentos_anteriores[1];
            movimentos_anteriores[1] = movimento;
        }
        num_movimentos++;
    }

    printf("Soma total do caminho: %d\n", soma);

    return 0;
}