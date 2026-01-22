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

    int linha, coluna, soma = 0; 
    char movimento; 
    char ultimos_movimentos[2] = {'\0', '\0'}; // Array para armazenar os últimos dois movimentos
    int contador_movimentos = 0;

    printf("Digite a linha inicial (0-9): ");
    scanf("%d", &linha);
    printf("Digite a coluna inicial (0-9): ");
    scanf("%d", &coluna);

    if (linha < 0 || linha > 9 || coluna < 0 || coluna > 9) { // Verifica se a posição inicial é válida
        printf("Erro: Posicao inicial invalida. As coordenadas devem estar entre 0 e 9.\n");
        return 1; 
    }

    soma += matriz[linha][coluna]; // Adiciona o valor inicial à soma
    printf("Valor inicial: %d\n", matriz[linha][coluna]); 
    printf("Posicao atual: [%d][%d]\n", linha, coluna);

    while (1) { // Laço principal para receber os movimentos do usuário
        printf("Proximo movimento (Cima: C, Baixo: B, Esquerda: E, Direita: D, Sair: S): ");
        scanf(" %c", &movimento);

        if (movimento >= 'a' && movimento <= 'z') { // Converte letras minúsculas para maiúsculas
            movimento = movimento - 'a' + 'A'; // Converte para maiúscula
        }

        if (movimento == 'S') {
            printf("Caminho interrompido pelo usuario.\n");
            break;
        }

        int linha_anterior = linha; // Armazena a linha anterior
        int coluna_anterior = coluna; // Armazena a coluna anterior
        int movimento_valido = 1; // Flag que marca se o movimento é válido

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
            default: // Movimento inválido
                printf("Movimento invalido. Por favor, digite C, B, E, D ou S.\n");
                movimento_valido = 0;
                break;
        }

        if (movimento_valido) { // Verifica se o movimento é válido
            if (linha < 0 || linha > 9 || coluna < 0 || coluna > 9) { // Verifica se a nova posição está fora dos limites da matriz
                printf("Movimento invalido (fora da matriz).\n");
                linha = linha_anterior; // Restaura a posição anterior
                coluna = coluna_anterior; // Restaura a posição anterior
                movimento_valido = 0; // Marca o movimento como inválido
            }
            else if (contador_movimentos >= 2) { // Verifica se já foram feitos dois movimentos
                int desfaz_vertical = (movimento == 'C' && (ultimos_movimentos[0] == 'B' || ultimos_movimentos[1] == 'B')) || 
                                      (movimento == 'B' && (ultimos_movimentos[0] == 'C' || ultimos_movimentos[1] == 'C')); // Verifica se o movimento desfaz um dos dois movimentos anteriores
                int desfaz_horizontal = (movimento == 'E' && (ultimos_movimentos[0] == 'D' || ultimos_movimentos[1] == 'D')) ||
                                        (movimento == 'D' && (ultimos_movimentos[0] == 'E' || ultimos_movimentos[1] == 'E')); // Verifica se o movimento desfaz um dos dois movimentos anteriores

                if (desfaz_vertical || desfaz_horizontal) { // Se o movimento desfaz um dos dois movimentos anteriores
                    printf("Movimento invalido (desfaz um dos dois movimentos anteriores).\n");
                    linha = linha_anterior; // Restaura a posição anterior
                    coluna = coluna_anterior; // Restaura a posição anterior
                    movimento_valido = 0; // Marca o movimento como inválido
                }
            }
        }
        if (movimento_valido) { // Se o movimento é válido e não desfaz um dos dois movimentos anteriores
            soma += matriz[linha][coluna]; // Adiciona o valor da nova posição à soma
            printf("Valor atual: %d\n", soma);
            printf("Posicao corrente: [%d][%d] = %d\n", linha, coluna, matriz[linha][coluna]);

            if (contador_movimentos < 2) { // Se ainda não foram feitos dois movimentos
                ultimos_movimentos[contador_movimentos] = movimento; // Armazena o movimento atual nos últimos movimentos
                contador_movimentos++; // Incrementa o contador de movimentos
            } else { // Se já foram feitos dois movimentos, atualiza os últimos movimentos
                ultimos_movimentos[0] = ultimos_movimentos[1]; // Move o último movimento para a primeira posição
                ultimos_movimentos[1] = movimento; // Armazena o novo movimento na segunda posição
            }
        }
    }
    printf("Soma total do caminho: %d\n", soma);
}