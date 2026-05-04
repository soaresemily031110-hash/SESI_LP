/*
3) Leia uma matriz 3x3 e mostre apenas os elementos da diagonal principal.
*/

#include <stdio.h>
int main() {

	int matriz[3][3];
	int soma = 0;
	for(int l=0; l<3; l++) {
		for(int c =0; c < 3; c++) {
			printf("\nDigite Valor de l:%i, c%i :", l+1, c+1);
			scanf("%i", &matriz[l][c]);
		}
	}

	int l=0;
	int c=0;

	while(l < 3) {
		c=0;
		while(c < 3) {
			printf("| %i", matriz[l][c]);
			c++;
		}
		printf("\n");
		l++;
	}

	printf("\nDiagonal principal:\n");

	for(int l=0; l<3; l++) {
		for(int c=0; c<3; c++) {
			if(l == c) {
				printf("| %i", matriz[l][c]);
			}
		}
		
	}	
}