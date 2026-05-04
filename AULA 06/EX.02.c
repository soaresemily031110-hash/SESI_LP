/*
2 - Uma pesquisa coletou a idade de 15 pessoas.
Desenvolva um programa que:
classifique as idades em: jovem (até 17), adulto (18–59) e idoso (60+)
informe qual grupo possui maior quantidade
*/

#include <stdio.h>
int main() {
    int idades[15];
    int i;
    int jovens = 0, adultos = 0, idosos = 0;

    for(i = 0; i < 15; i++) {
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &idades[i]);

        if(idades[i] <= 17) {
            jovens++;
        } else if(idades[i] <= 59) {
            adultos++;
        } else {
            idosos++;
        }
    }

    printf("\nQuantidade de jovens: %d\n", jovens);
    printf("Quantidade de adultos: %d\n", adultos);
    printf("Quantidade de idosos: %d\n", idosos);

    if(jovens > adultos && jovens > idosos) {
        printf("O grupo com maior quantidade é: Jovens\n");
    } else if(adultos > jovens && adultos > idosos) {
        printf("O grupo com maior quantidade é: Adultos\n");
    } else if(idosos > jovens && idosos > adultos) {
        printf("O grupo com maior quantidade é: Idosos\n");
    } else {
        printf("Ha empate entre dois ou mais grupos.\n");
    }


}