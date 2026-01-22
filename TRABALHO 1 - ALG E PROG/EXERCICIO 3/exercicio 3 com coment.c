#include <stdio.h>

int main() {
    int valor, acumulador = 0;
    int somando = 1; // Usada como um indicador de operação, quando somando == 1, o programa vai somar os próximos valores positivos ao acumulador e quando somando == 0, o programa vai subtrair os próximos valores positivos do acumulador.

    printf("Digite uma serie de numeros (0 encerra):\n");

    while (1) { //  Lê um número inteiro digitado pelo usuário e armazena na variável valor.
        scanf("%d", &valor);

        if (valor == 0) { // Verifica se o usuário digitou 0, se sim, encerra o laço while.
            break;
        }

        if (valor == -1) { // Serve como um comando especial do usuário para trocar a operação (de soma para subtração, ou vice-versa).
            if (somando == 1) { // Inverte o valor da variável somando, muda de somar para subtrair.
                somando = 0;
            } else { // Inverte o valor da variável somando, muda de subtrair para somar.
                somando = 1;
            }
        } else if (valor > 0) { // Vai ser executado apenas se o número digitado for maior que zero.
            if (somando == 1) { // Soma o valor ao acumulador.
                acumulador = acumulador + valor;
            } else { // Subtrai o valor do acumulador.
                acumulador = acumulador - valor;
            }
        }
    }

    printf("Valor final do acumulador: %d\n", acumulador);

    return 0;
}
