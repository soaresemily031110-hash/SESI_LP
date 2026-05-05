#include <stdio.h>

int adicao(int a, int b) {
    return a + b;
}
int subtracao(int a, int b) {
    return a - b;
}
int multiplicacao(int a, int b) {
    return a * b;
}
int divisao(int a, int b) {
    return a / b;
}

void imprimirvalores(char *descricao, int valor){
    printf("\n%s: %i", descricao, valor);
}

int main() {
    int n1, n2;
    int opcao;

    do {
        printf("\n1 - Soma\n");
        printf("2 - Divisao\n");
        printf("3 - Multiplicacao\n");
        printf("4 - Subtracao\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%i", &opcao);

        if (opcao == 0) {
            printf("\nEncerrando programa...\n");
            break;
        }

        printf("\nDigite o valor1: ");
        scanf("%i", &n1);

        printf("Digite o valor2: ");
        scanf("%i", &n2);

        if (opcao == 1) {
            imprimirvalores("Soma", adicao(n1, n2));
        } 
        else if (opcao == 2) {
            if (n2 == 0) {
                printf("\nErro: divisao por zero!\n");
            } else {
                imprimirvalores("Divisao", divisao(n1, n2));
            }
        } 
        else if (opcao == 3) {
            imprimirvalores("Multiplicacao", multiplicacao(n1, n2));
        } 
        else if (opcao == 4) {
            imprimirvalores("Subtracao", subtracao(n1, n2));
        } 
        else {
            printf("\nOpcao invalida!\n");
        }

    } while (opcao != 0);
}