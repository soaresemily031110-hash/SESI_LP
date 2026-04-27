/*
11) Leia 10 números e ordene em ordem decrescente.
*/
#include <stdio.h>

int main() {
    int num[10], temp;
    
    // leitura
    for(int i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &num[i]);
    }
    
    // ordenação (decrescente)
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 9; j++) {
            if(num[j] < num[j + 1]) {
                // troca
                temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }
    
    // exibição
    printf("Vetor em ordem decrescente:\n");
    for(int i = 0; i < 10; i++) {
        printf("%d\n", num[i]);
    }
    
    return 0;
}

