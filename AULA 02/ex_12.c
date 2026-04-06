/*
13) Operação Matemática
Leia dois números e uma operação (+, -, *, /).
Realize a operação e exiba o resultado.
*/


#include <stdio.h>

int main() {
    float a, b, resultado;
    char op;

    printf("Digite o primeiro numero: ");
    scanf("%f", &a);

    printf("Digite o segundo numero: ");
    scanf("%f", &b);

    printf("Digite a operacao (+, -, *, /): ");
    scanf(" %c", &op); // espaço antes de %c evita problemas com ENTER

    switch(op) {
        case '+':
            resultado = a + b;
            printf("Resultado: %.2f\n", resultado);
            break;

        case '-':
            resultado = a - b;
            printf("Resultado: %.2f\n", resultado);
            break;

        case '*':
            resultado = a * b;
            printf("Resultado: %.2f\n", resultado);
            break;

        case '/':
            if (b != 0) {
                resultado = a / b;
                printf("Resultado: %.2f\n", resultado);
            } else {
                printf("Erro: divisao por zero!\n");
            }
            break;

        default:
            printf("Operacao invalida!\n");
    }

}