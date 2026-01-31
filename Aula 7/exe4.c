/*Fazer um programa que lê um inteiro positivo e calcula a raiz quadrada (aproximada) deste valor. Não deve ser usada nenhuma função pronta para o cálculo, que deve ser feito usando o seguinte método: -  tendo  x  como  o  número  do  qual  se  quer  achar  a  raiz  quadrada,  deve-se  propor  um  número qualquer n como primeira possibilidade (tente algo como n=x/2); - se I x - n2 I for menor do que um erro tolerável, no nosso caso 0,05, assuma n como a raiz aproximada; senão, gere um novo n, com o valor igual à média aritmética entre n e x/n.*/
#include <stdio.h>
int main() {
    float x, n, erro;
    printf("Digite um numero inteiro positivo: ");
    scanf("%f", &x);
    n = x / 2.0;
    erro = 0.05;
    while (1) {
        float diferenca = n * n - x;
        if (diferenca < 0) {
            diferenca = -diferenca;
        }
        if (diferenca < erro) {
            break;
        }
        n = (n + x / n) / 2.0;
    }
    printf("A raiz quadrada aproximada de %.2f e: %.2f\n", x, n);
}