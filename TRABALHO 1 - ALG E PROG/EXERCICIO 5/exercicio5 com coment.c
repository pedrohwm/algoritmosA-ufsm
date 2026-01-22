#include <stdio.h>

int main() {
    int numero, temp, digito, i, repetido = 0; // Serve como um indicador (flag) para saber se foi encontrada repetição de dígitos.

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    temp = numero; // Guarda o valor do numero digitado em uma variavel auxiliar.
    while (temp > 0 && !repetido) { // O loop continua enquanto temp for positivo e nenhuma repetição tiver sido encontrada (repetido == 0).
        digito = temp % 10; // Obtém o último dígito de temp.
        int temp2 = temp / 10; // temp2 é a parte de temp sem o último dígito (o que foi isolado como digito).
        while (temp2 > 0) { // Esse loop percorre os outros dígitos de temp2 para comparar com digito.
            if (digito == temp2 % 10) {
                repetido = 1; // Se encontrar algum dígito igual, define repetido = 1 e interrompe os loops.
                break;
            }
            temp2 /= 10;
        }
        temp /= 10; // Remove o último dígito de temp, que já foi analisado, movendo a verificação para o próximo dígito da direita para a esquerda.
    }

    // Verifica repetição de dígitos na notação hexadecimal
    if (!repetido) { // Esse bloco só será executado se nenhum dígito repetido foi encontrado na verificação decimal anterior.
        temp = numero;
        while (temp > 0 && !repetido) {  // O loop continua enquanto temp > 0 e ainda não foi detectada repetição.
            digito = temp % 16; // Digito recebe o último "dígito hexadecimal" de temp (valor entre 0 e 15).
            int temp2 = temp / 16; // temp2 recebe o restante de temp, sem esse último dígito.
            while (temp2 > 0) { // Compara o digito com os outros dígitos da representação hexadecimal (em temp2).
                if (digito == temp2 % 16) {
                    repetido = 1; // Se encontrar um igual define repetido = 1 e interrompe os laços.
                    break;
                }
                temp2 /= 16;
            }
            temp /= 16; // Remove o último dígito hexadecimal já analisado, indo para o próximo.

        }
    }

    if (repetido) { // Se a variável repetido for igual a 1 (verdadeiro), isso significa que foi encontrado algum dígito repetido.
        printf("O numero possui digitos repetidos em alguma notacao.\n");
    } else { // Se repetido == 0, então nenhum dígito se repetiu em nenhuma das duas notações.
        printf("O numero nao possui digitos repetidos em nenhuma notacao.\n");
    }

    return 0;
}
