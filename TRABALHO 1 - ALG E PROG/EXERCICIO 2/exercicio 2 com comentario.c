#include <stdio.h>

int main() {
    int n, lin, col;
    int dif_min = 1000, sobra_min = 1000; // Serve para inicializar valores mínimos com um número bem alto, pois qualquer valor será menor.
    int melhor_lin = 0, melhor_col = 0;

    printf("Digite o numero de objetos (maior que 5): ");
    scanf("%d", &n);

    if (n <= 5) { // Testa se n é menor que 5.
        printf("Valor invalido. Deve ser maior que 5.\n");
        return 0;
    }

    for (lin = 2; lin <= n; lin++) { // Testa várias quantidades de linhas possíveis para organizar n, começa em 2 e vai até o valor de n.
        col = n / lin; // Calcula a quantidade inicial de colunas para o número de linhas, usando o máximo possível de bolinhas sem ultrapassar o valor de n.

        if (lin * col > n) {
            continue; // Se lin * col for maior que n, ignora pois a forma é inválida.
        }

        while (lin * col <= n) { // Continua tentando diferentes quantidades de colunas, desde que o total de objetos usados (lin * col) não ultrapasse n.
            int usados = lin * col; // Calcula quantas bolinhas são usadas na grade atual.
            int sobra = n - usados; // Calcula quantas bolinhas sobrariam fora da grade, ou seja, não caberiam.
            int dif = lin - col; // Calcula a diferença entre o número de linhas e colunas, serve para medir o formato da grade.
            if (dif < 0) { // Converte dif em um valor absoluto minimizando a diferença absoluta entre linhas e colunas, buscando uma forma mais quadrada.
                dif = -dif;
            }

            if (lin == col && sobra == 0) { // Verifica se a configuração atual de linhas e colunas forma um quadrado perfeito onde o número de linhas é igual ao número de colunas e todos os objetos são usados, ou seja, não sobra nenhum fora da grade.
                melhor_lin = lin; // Atualiza a melhor configuração encontrada até agora com essa.
                melhor_col = col;
                sobra_min = 0; // Atualiza os critérios mínimos para a melhor distribuição possível, nenhuma sobra e diferença zero entre linhas e colunas.
                dif_min = 0;
                break; // Sai do while atual porque já encontrou a melhor forma possível, então não precisa testar mais colunas para esse número de linhas.
            }

            if (sobra < sobra_min || (sobra == sobra_min && dif < dif_min)) { // Se a configuração atual deixa menos objetos sobrando do que a melhor anterior, ela é considerada melhor ou se a sobra for igual à menor encontrada até agora, escolhe aquela com a menor diferença entre linhas e colunas, ou seja, mais quadrada.
                melhor_lin = lin;
                melhor_col = col; // Atualiza a melhor distribuição encontrada até agora, caso a configuração atual seja mais vantajosa do que as anteriores, mesmo que não seja um quadrado perfeito.
                sobra_min = sobra;
                dif_min = dif;
            }

            col++; // Incrementa o número de colunas para tentar uma nova configuração com mais colunas e ver se ela se encaixa melhor.
        }

        if (sobra_min == 0 && dif_min == 0) { // Interrompe o laço principal se o melhor caso já foi encontrado.
            break;
        }
    }

    printf("Melhor distribuicao: %d linha(s) x %d coluna(s)\n", melhor_lin, melhor_col);

    return 0;
}
