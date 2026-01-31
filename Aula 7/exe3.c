/*Escreva  um  programa  que  leia  dois  números  naturais  não  nulos  e  mostre  na  tela  os 
números  naturais  que  são  divisores  de  ambos.  Por  exemplo,  se  forem  informados  os  valores 
12  (divisores:  1,  2,  3,  4,  6,  12)  e  15  (divisores:  1,  3,  5,  15),  devem  ser  mostrados  na  tela  os 
valores 1 e 3. */
#include <stdio.h>
int main() {
    int a, b;
    printf("Digite dois números naturais não nulos: ");
    scanf("%d %d", &a, &b);
    printf("Os divisores comuns são: ");
    for (int i = 1; i <= (a < b ? a : b); i++) {
        if (a % i == 0 && b % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}