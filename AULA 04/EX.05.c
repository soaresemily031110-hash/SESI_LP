/*
5) Leia 6 números e mostre o menor valor. 
*/

#include <stdio.h>

int main() {
    int num, menor;
    
    for(int i = 1; i <= 6; i++) {
        printf("Digite um numero: ");
        scanf("%d", &num);
        
        if(i == 1) {
            menor = num; 
        } else {
            if(num < menor) {
                menor = num; 
            }
        }
    }
    
    printf("O menor valor e: %d\n", menor);
    
    return 0;
}