/*
7 - Um caixa eletrônico registrou 10 valores de saques realizados.
Crie um programa que:
calcule o total sacado
identifique o maior saque realizado
informe quantos saques foram acima de R$ 500
*/

#include <stdio.h>

int main() {
    float saques[10];
    float total = 0;
    float maior;
    int i;
    int acima500 = 0;

    for(i = 0; i < 10; i++) {
        printf("Digite o valor do saque %d: ", i + 1);
        scanf("%f", &saques[i]);
        total += saques[i];
    }

    maior = saques[0];

    for(i = 0; i < 10; i++) {
        if(saques[i] > maior) {
            maior = saques[i];
        }
        if(saques[i] > 500) {
            acima500++;
        }
    }

    printf("*********************************************\n");
    printf("Total sacado: R$ %.2f\n", total);
    printf("Maior saque: R$ %.2f\n", maior);
    printf("Saques acima de R$ 500: %d\n", acima500);
    printf("*********************************************\n");

}