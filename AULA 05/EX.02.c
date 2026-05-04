/*
2) Leia uma matriz 2x2 e mostre a soma de todos os elementos.
*/

#include <stdio.h>
int main() {

	int matriz[2][2];
	int soma = 0;

	for(int l=0; l<2; l++) {
		for(int c =0; c < 2; c++) {
			printf("\nDigite Valor de l:%i, c%i :", l+1, c+1);
			scanf("%i", &matriz[l][c]);
		}
	}

	int l=0;
	int c=0;

	while(l < 2) {
		c=0;
		while(c < 2) {
			printf("| %i", matriz[l][c]);
			c++;
		}
		printf("\n");
		l++;
	}

	for(int l=0; l<2; l++) {
		for(int c=0; c<2; c++) {
			soma += matriz[l][c];
		}
	}

	printf("\nSoma dos elementos: %d\n", soma);

}