#include <stdio.h>

int main() {
    int a, b, c, d;
    printf("Digite os valores de a, b, c e d: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int melhor_valor = 0, maior_divisores = 0, encontrou = 0; /*
    melhor_valor: Armazena o número no intervalo a,b que é divisível pelo maior número de valores entre c,d.
    maior_divisores: Guarda o maior número de divisores encontrados até o momento.*/

    // Procura entre os números de a e b, qual deles é divisível pelo maior número de valores entre c e d.
    for (int i = a; i <= b; i++) { // Percorre todos os inteiros i (entre a e b) e para cada número i, o programa vai verificar com quantos valores de j (de c a d) ele é divisível.
        int divisores = 0; /*
        Zera o contador de divisores para o valor atual de i.
        Este contador será incrementado dentro do segundo for se i for divisível por algum j.*/

        for (int j = c; j <= d; j++) { // Percorre todos os inteiros j no intervalo entre c e d e cada j será testado para ver se divide o número i atual.
            if (j != 0 && i % j == 0) { /*
            Garante que j nunca seja zero.
            i % j == 0 significa que i é divisível por j sem resto.
            Se for divisível, então j é um divisor válido de i. */
                divisores++; // Se a condição acima for verdadeira, incrementa o número de divisores encontrados para i.
            }
        }

        if (divisores > maior_divisores) { // Se o número atual i tem mais divisores do que qualquer valor anterior:
            melhor_valor = i; // Atualiza melhor_valor para i.
            maior_divisores = divisores; // Atualiza maior_divisores com o novo número de divisores.
            encontrou = 1; // Define encontrou = 1 para indicar que pelo menos um valor válido foi encontrado.
        } else if (divisores == maior_divisores && divisores > 0) { // Se o número atual i tem o mesmo número de divisores que o valor atual considerado como melhor:
            if (i < melhor_valor) { // E se esse número i é menor que o melhor_valor atual.
                melhor_valor = i; // Então o programa substitui melhor_valor por esse i, pois o critério de desempate é escolher o menor valor.
            }
        }
    }

    if (encontrou) { // A variável encontrou foi usada durante os laços para indicar se algum número i entre a e b teve pelo menos um divisor entre c e d.
        printf("O valor entre %d e %d que e divisivel pelo maior numero de valores entre %d e %d e: %d\n", a, b, c, d, melhor_valor);
    } else {
        printf("Nenhum valor entre %d e %d e divisivel por qualquer valor entre %d e %d.\n", a, b, c, d);
    }

    return 0;
}
