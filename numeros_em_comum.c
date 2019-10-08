//Encontrar os números em comum entre 2 arrays.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int contador = 0;
	int A[50], B[50], C[50];
	int quantidadeA, quantidadeB, quantidadeC, i, j, k;
	
	printf("\nQual a quantidade de entradas de A? ");
	scanf("%d", &quantidadeA);
	
	printf("\nQual a quantidade de entradas de B? ");
	scanf("%d", &quantidadeB);
	
	while (contador < quantidadeA) {
		printf("Insira um numero em A: ");
		scanf("%d", &A[contador]);
		contador++;
	}
	
	contador = 0;
	
	while (contador < quantidadeB) {
		printf("Insira um numero em B: ");
		scanf("%d", &B[contador]);
		contador++;
	}
	
	quantidadeC = 0;
	
	for(i=0; i<quantidadeA; i++) {
		for(j=0; j<quantidadeB; j++) {
			if(A[i] == B[j]) {
				C[quantidadeC] = A[i];
				quantidadeC++;
			}
		}
	}

	printf("Foram encontrados %d numeros em comum: ", quantidadeC);

	for(k=0; k<quantidadeC; k++){
		printf(" %d", C[k]);
	}
	
	return 0;
}
