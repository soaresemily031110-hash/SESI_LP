/*
2) Leia um número inteiro e informe se ele é par ou ímpar.
*/

#include <stdio.h>

int main() { 
    int n; 
    
    printf("digite um numero: ");
    scanf("%i", &n);
    
    if (n % 2 == 0){
    printf("par");
    } else if (n % 2 == 1)
    printf("impar");
    
}