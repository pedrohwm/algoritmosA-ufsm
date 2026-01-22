#include <stdio.h>

main() {
    int n, lin, col;
    int dif_min = 1000, sobra_min = 1000;
    int melhor_lin = 0, melhor_col = 0;
    printf("Digite o numero de objetos (maior que 5): ");
    scanf("%d", &n);
    if (n <= 5) {
        printf("Valor invalido. Deve ser maior que 5.\n");
        return 0;
    }
    for (lin = 2; lin <= n; lin++) {
        col = n / lin;
        if (lin * col > n) {
            continue;
        }
        while (lin * col <= n) {
            int usados = lin * col;
            int sobra = n - usados;
            int dif = lin - col;
            if (dif < 0) {
                dif = -dif;
            }
            if (lin == col && sobra == 0) {
                melhor_lin = lin;
                melhor_col = col;
                sobra_min = 0;
                dif_min = 0;
                break;
            }
            if (sobra < sobra_min || (sobra == sobra_min && dif < dif_min)) {
                melhor_lin = lin;
                melhor_col = col;
                sobra_min = sobra;
                dif_min = dif;
            }
            col++;
        }
        if (sobra_min == 0 && dif_min == 0) {
            break;
        }
    }
    printf("Melhor distribuicao: %d linha(s) x %d coluna(s)\n", melhor_lin, melhor_col);
}
