/*
1) Classificação de Idade
Leia a idade de uma pessoa e informe:
Criança (0–12)
Adolescente (13–17)
Adulto (18–59)
Idoso (60+)
*/


#include <stdio.h>

int main() {
    float idade;

    printf("Digite a sua idade: ");
    scanf("%f", &idade); 
    
    if(idade >= 0 && idade <= 12) {
        printf("criança\n");
    } else if (idade >= 13 && idade <= 17) {
        printf("adolescente\n");
    } else if (idade >= 18 && idade <= 59) {
        printf("adulto\n");
    } else if (idade >= 60){
        printf("idoso\n");
    }

    return 0;


}