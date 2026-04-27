/*
3) Leia 8 números e calcule a soma de todos os elementos do vetor.
*/

#include <stdio.h>

int main() {
    int vetor[8];
    int i, soma = 0;

    // Leitura dos números
    for(i = 0; i < 8; i++) {
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }

    // Cálculo da soma
    for(i = 0; i < 8; i++) {
        soma += vetor[i];
    }

    // Exibição do resultado
    printf("Soma dos elementos: %d\n", soma);

    return 0;
}
    

