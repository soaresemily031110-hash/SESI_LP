/*
4) Leia 6 números e mostre o maior valor.
*/

    #include <stdio.h>

int main() {
    int num, maior;
    
    for(int i = 1; i <= 6; i++) {
        printf("Digite um numero: ");
        scanf("%d", &num);
        
        if(i == 1) {
            maior = num;
        } else {
            if(num > maior) {
                maior = num; 
            }
        }
    }
    
    printf("O maior valor eh: %d\n", maior);
    
    return 0;
}

    

