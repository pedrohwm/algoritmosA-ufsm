#include <stdio.h>

int main() {
    int n, x, d1, d2, d3;  /*
    n: Variável usada para representar o número atual em que o código está operando. No código, ela percorre os números de 100 até 998.
    x: Usada para armazenar o valor de n durante o processo de Kaprekar. A ideia é modificar x até que ele chegue a 495.
    d1, d2, d3: Estas são as variáveis para os dígitos individuais de x. */
    int a, b, c; // Usadas para ordenar os dígitos de x em ordem crescente (menor, meio e maior).
    int menor, maior, temp; /*
    menor: Variável que vai armazenar o número formado pelos dígitos em ordem crescente.
    maior: Variável que vai armazenar o número formado pelos dígitos em ordem decrescente.
    temp: Usada como uma variável temporária para trocar valores entre a, b e c durante a ordenação. */
    int passos, resultado; // passos: Conta o número de iterações realizadas até que o número x atinja 495 ou o número de iterações atinja o limite de 100.
    int falhou = 0; // Indica se houve algum número que não conseguiu convergir para 495 dentro do limite de 100 passos.

    for (n = 100; n <= 998; n++) { // Percorre todos os números de 3 dígitos começando em 100 até 998, cada valor de n representa um número a ser testado no processo.
        d1 = n / 100; // Extrai o primeiro dígito do número n.
        d2 = (n / 10) % 10; // Extrai o segundo dígito do número n.
        d3 = n % 10; // Extrai o terceiro dígito do número n.

        if (d1 == d2 && d2 == d3) { // Ignora números que têm todos os dígitos iguais.
            continue;
        }

        x = n; // Inicializa x com o valor atual de n onde x é a variável que será modificada a cada iteração do processo de Kaprekar.
        passos = 0; // Serve para limitar o número de tentativas a 100, e evitar loops infinitos em caso de erro.

        while (x != 495 && passos < 100) { // Inicia um laço que continua enquanto o número x for diferente de 495 e o número de iterações (passos) for menor que 100.
            d1 = x / 100;
            d2 = (x / 10) % 10;
            d3 = x % 10;

            a = d1;
            b = d2; // Copia os dígitos para variáveis auxiliares (a, b, c) para facilitar a ordenação.
            c = d3;

            if (a > b) { temp = a; a = b; b = temp; } // Garante que a vai conter o menor dos três dígitos.
            if (a > c) { temp = a; a = c; c = temp; } // b o intermediário,
            if (b > c) { temp = b; b = c; c = temp; } // c o maior.

            menor = a * 100 + b * 10 + c; // Forma o número com os dígitos em ordem crescente.
            maior = c * 100 + b * 10 + a; // Forma o número com os dígitos em ordem decrescente.

            x = maior - menor; // Faz a subtração principal da operação
            passos++; // Incrementa o contador de passos.
        }

        if (x != 495) { // Verifica se nenhum número falhou durante a execução.
            printf("Falha com: %d\n", n);
            falhou = 1;
        }
    }

    if (!falhou) { // Significa “não houve falha” (já que falhou ainda vale 0).
        printf("Todos os numeros validos chegaram a 495!\n");
    }

    return 0;
}
