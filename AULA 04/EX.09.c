/*
9) Leia 10 números e substitua os negativos por zero.
*/
#include <stdio.h>

int main() {
    int num[10];
    
    // leitura e substituição
    for(int i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &num[i]);
        
        if(num[i] < 0) {
            num[i] = 0; 
        }
    }
    
   
    printf("Valores finais:\n");
    
    for(int i = 0; i < 10; i++) {
        printf("%d\n", num[i]);
    }
    
    return 0;
}
