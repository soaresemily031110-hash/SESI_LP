/*
4) Verificação de Aprovação, leia a nota de um aluno (0 a 10).
Informe:
Aprovado (nota >= 7)
Recuperação (nota entre 5 e 6.9)
Reprovado (nota < 5)
*/

#include <stdio.h>
int main() {
    float nota;
    
    printf("digite a nota do aluno (0 e 10): ");
    scanf("%f", &nota);
    
    if (nota >= 7){
        printf("Aprovado");
    } else if (nota >= 5 && nota <= 6.9){
        printf("Recuperção");
    } else if (nota > 5){
        printf("reprovado");
    }
    

}

