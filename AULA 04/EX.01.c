/*
1) Leia 5 números inteiros e armazene em um vetor. Exiba todos os valores.
*/

#include <stdio.h>

int main(){
      int numeros[5];

    for (int i=0; i<=5; i++){
    printf("digite um numero: ");
    scanf("%i", &numeros[i]);
    }
    printf("os numeros foram:");
     for (int i=0; i<=5; i++){
    printf("%i", numeros[i]);
     }
    return 0;
}