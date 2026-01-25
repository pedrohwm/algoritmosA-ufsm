/*Escrever um algoritmo para ler a quantidade de horas-aula ministradas por dois professores 
e o valor por hora recebido por cada um. Mostrar na tela qual dos professores tem salário total 
maior. */
#include <stdio.h>
int main() {
    float horas_prof1, valor_hora_prof1, salario_prof1;
    float horas_prof2, valor_hora_prof2, salario_prof2;
    printf("Digite a quantidade de horas-aula ministradas pelo primeiro professor: ");
    scanf("%f", &horas_prof1);
    printf("Digite o valor por hora recebido pelo primeiro professor: ");
    scanf("%f", &valor_hora_prof1);
    salario_prof1 = horas_prof1 * valor_hora_prof1;
    printf("Digite a quantidade de horas-aula ministradas pelo segundo professor: ");
    scanf("%f", &horas_prof2);
    printf("Digite o valor por hora recebido pelo segundo professor: ");
    scanf("%f", &valor_hora_prof2);
    salario_prof2 = horas_prof2 * valor_hora_prof2;
    if (salario_prof1 > salario_prof2) {
        printf("O primeiro professor tem o salário maior: R$ %.2f\n", salario_prof1);
    } else if (salario_prof2 > salario_prof1) {
        printf("O segundo professor tem o salário maior: R$ %.2f\n", salario_prof2);
    } else {
        printf("Ambos os professores têm o mesmo salário: R$ %.2f\n", salario_prof1);
    }
    return 0;
}