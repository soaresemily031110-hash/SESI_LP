/*
6-Um sistema armazenou 10 números inteiros.
Crie um programa que:
separe os números em pares e ímpares
conte quantos existem de cada tipo
exiba os dois grupos separadamente
*/

#include <stdio.h>
int main() {
    int v[10];
    int pares[10], impares[10];
    int i;
    int contPar = 0, contImpar = 0;

 
    for(i = 0; i < 10; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &v[i]);
    }

    for(i = 0; i < 10; i++) {
        if(v[i] % 2 == 0) {
            pares[contPar] = v[i];
            contPar++;
        } else {
            impares[contImpar] = v[i];
            contImpar++;
        }
    }

    printf("\nNumeros pares (%d): ", contPar);
    for(i = 0; i < contPar; i++) {
        printf("%d ", pares[i]);
    }

    printf("\nNumeros impares (%d): ", contImpar);
    for(i = 0; i < contImpar; i++) {
        printf("%d ", impares[i]);
    }


}