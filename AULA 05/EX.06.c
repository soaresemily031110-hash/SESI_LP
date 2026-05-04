/*
6) Leia uma matriz 4x4 e encontre o maior e o menor valor.
*/

#include <stdio.h>
int main() {
	int matriz[4][4];
	for(int l=0; l<4; l++) {
		for(int c =0; c < 4; c++) {
			printf("\nDigite Valor de l:%i, c%i :", l+1, c+1);
			scanf("%i", &matriz[l][c]);
		}
	}

	int l=0;
	int c=0;

	while(l < 4) {
		c=0;
		while(c < 4) {
			printf("| %i", matriz[l][c]);
			c++;
		}
		printf("\n");
		l++;
	}
	int menor = matriz[0][0];
	int maior = matriz[0][0];

	printf("\nMenor e maior valor da matriz:\n");
	for(int l = 0; l < 4; l++) {
		for(int c = 0; c < 4; c++) {
			if(matriz[l][c] < menor) {
				menor = matriz[l][c];
			}
			if(matriz[l][c] > maior) {
				maior = matriz[l][c];
				printf("Menor valor = %d\n", menor);
				printf("Maior valor = %d\n", maior);
			}
		}
	}

}