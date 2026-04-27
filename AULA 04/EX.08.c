/*
8) Leia 10 números e exiba apenas os valores maiores que a média.
*/

#include <stdio.h>

int main() {
    int num[10], soma = 0;
    float media;
    
    // leitura dos números
    for(int i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &num[i]);
        soma += num[i];
    }
    
    // cálculo da média
    media = soma / 10.0;
    
    printf("Media: %.2f\n", media);
    printf("Valores maiores que a media:\n");
    
    // mostrar os maiores que a média
    for(int i = 0; i < 10; i++) {
        if(num[i] > media) {
            printf("%d\n", num[i]);
        }
    }
    
    return 0;
}