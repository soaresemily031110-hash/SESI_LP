/*
19) Cálculo de Frete
Leia o peso de uma encomenda:
Até 5kg → R$10
5 a 20kg → R$20
Acima de 20kg → R$50
*/

#include <stdio.h>

int main() {
    float peso;
    float frete;

    // Leitura do peso
    printf("Digite o peso da encomenda (kg): ");
    scanf("%f", &peso);

    // Cálculo do frete
    if (peso <= 5) {
        frete = 10;
    } else if (peso <= 20) {
        frete = 20;
    } else {
        frete = 50;
    }

    // Exibição do resultado
    printf("O frete é R$%.2f\n", frete);

}
