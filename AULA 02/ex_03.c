/*
3) Leia dois números inteiros e informe qual é o maior ou se são iguais.
*/

#include <stdio.h>

int main() {
    int n1; 
    int n2;
    
    printf("digite um numero: ");
    scanf("%i", &n1);
    
    printf("digite outro numero: ");
    scanf("%i", &n2);
    
    if (n1 >= n2){
        printf("n1 é o maior");
    } else if (n2 >= n1){
        printf("n2 é o maior");
    }
    
}