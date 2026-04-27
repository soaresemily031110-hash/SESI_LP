/*
2) Leia 10 números e mostre apenas os números pares.
*/

#include <stdio.h>

int main(){
    int num, i;
    
    for(i=0; i<10; i++ ){
        printf("digite um numero: ");
        scanf("%d", &num);
        
        if(num % 2 == 0)
        printf("numero par: %d\n", num);
    }
}
    

