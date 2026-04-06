/*
11) Verificação de Múltiplos
Leia dois números e verifique se o primeiro é múltiplo do segundo.
*/

#include <stdio.h>

#include <stdio.h>

int main() {
    int a, b;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);

    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    if (b == 0) {
        printf("Nao e possivel verificar (divisao por zero).\n");
    } else if (a % b == 0) {
        printf("%d e multiplo de %d\n", a, b);
    } else {
        printf("%d nao e multiplo de %d\n", a, b);
    }

}

