#include <stdio.h>

int main() {
    int soma = 0;

    for(int i = 1; i <= 10; i++) {
        soma += i;
    }

    printf("A soma dos números de 1 até 10 é: %d\n", soma);

    return 0;
}