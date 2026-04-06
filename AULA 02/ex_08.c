/*
9) Número Positivo, Negativo ou Zero
Leia um número e informe se ele é:
Positivo
Negativo
Zero
*/

#include <stdio.h>

int main() {
    float num;

    printf("Digite um numero: ");
    scanf("%f", &num);

    if (num > 0) {
        printf("Positivo\n");
    } else if (num < 0) {
        printf("Negativo\n");
    } else {
        printf("Zero\n");
    }

}