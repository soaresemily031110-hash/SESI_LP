/*
7) Leia 10 números e mostre a média dos valores
*/
#include <stdio.h>

int main() {
    int num, soma = 0;
    float media;
    
    for(int i = 1; i <= 10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &num);
        
        soma += num;
    }
    
    media = soma / 10.0; 
    
    printf("A media e: %.2f\n", media);
    
    return 0;
}