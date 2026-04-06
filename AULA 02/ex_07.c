/*
7) Verificação de Triângulo
Leia três valores e verifique se podem formar um triângulo.
Caso formem, classifique como:
Equilátero
Isósceles
Escaleno
*/

#include <stdio.h>

int main() {
    float a, b, c;

    printf("Digite o primeiro valor: ");
    scanf("%f", &a);

    printf("Digite o segundo valor: ");
    scanf("%f", &b);

    printf("Digite o terceiro valor: ");
    scanf("%f", &c);

    // Verifica se forma triângulo
    if (a + b > c && a + c > b && b + c > a) {
        printf("Forma um triangulo!\n");

        // Classificação
        if (a == b && b == c) {
            printf("Triangulo Equilatero\n");
        } else if (a == b || a == c || b == c) {
            printf("Triangulo Isosceles\n");
        } else {
            printf("Triangulo Escaleno\n");
        }
    } else {
        printf("Nao forma um triangulo.\n");
    }

    
}
    