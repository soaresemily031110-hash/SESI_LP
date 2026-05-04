/*
4 - Dado um array de 10 números, determine se existe algum valor que aparece mais da metade das vezes (valor dominante).
*/

#include <stdio.h>
int main() {
    int v[10];
    int i, j, cont;
    int dominante = 0;


    for(i = 0; i < 10; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &v[i]);
    }

    for(i = 0; i < 10; i++) {
        cont = 0;

        for(j = 0; j < 10; j++) {
            if(v[i] == v[j]) {
                cont++;
            }
        }

        if(cont > 10 / 2) {
            dominante = v[i];
            break;
        }
    }
    if(cont > 10 / 2) {
        printf("Valor dominante: %d\n", dominante);
    } else {
        printf("Nao existe valor dominante\n");
    }

}