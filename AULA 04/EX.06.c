/*
6) Leia 10 números e conte quantos são positivos.
*/

#include <stdio.h>

int main() {
    int num, contador = 0;
    
    for(int i = 1; i <= 10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &num);
        
        if(num > 0) {
            contador++; // soma 1 se for positivo
        }
    }
    
    printf("Quantidade de numeros positivos: %d\n", contador);
    
    return 0;
}