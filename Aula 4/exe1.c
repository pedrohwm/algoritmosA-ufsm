/*Escrever um algoritmo para ler duas notas de um aluno e escrever na tela a palavra 
“Aprovado” se a média das duas notas for maior ou igual a 7,0. Caso a média seja inferior a 
7,0, o programa deve ler a nota do exame e calcular a média final. Se esta média for maior ou 
igual a 5,0, o programa deve escrever “Aprovado”, caso contrário deve escrever “Reprovado”.*/
#include <stdio.h>
int main() {
    float nota1, nota2, media, nota_exame, media_final;
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    media = (nota1 + nota2) / 2;
    if (media >= 7.0) {
        printf("Aprovado\n");
    } else {
        printf("Digite a nota do exame: ");
        scanf("%f", &nota_exame);
        media_final = (media + nota_exame) / 2;
        if (media_final >= 5.0) {
            printf("Aprovado\n");
        } else {
            printf("Reprovado\n");
        }
    }
    return 0;
}