/*
7) Leia uma matriz 5x5 e calcule a soma da diagonal secundária.
*/

#include <stdio.h>
int main() {

	int matriz[5][5];
	int soma = 0;
	for(int l=0; l<5; l++) {
		for(int c =0; c < 5; c++) {
			printf("\nDigite Valor de l:%i, c%i :", l+1, c+1);
			scanf("%i", &matriz[l][c]);
		}
	}

	int l=0;
	int c=0;

	while(l < 5) {
		c=0;
		while(c < 5) {
			printf("| %i", matriz[l][c]);
			c++;
		}
		printf("\n");
		l++;
	}


	printf("\nDiagonal secundaria:\n");

	for(int l=0; l<5; l++) {
		for(int c=0; c<5; c++) {
			if(l + c == 4) {
				printf("| %i", matriz[l][c]);
				soma += matriz[l][c];
			}
		}
	}

	printf("\nSoma da diagonal secundaria = %d\n", soma);
}