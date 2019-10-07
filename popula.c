#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i;
	int contador = 0;   // Conta quantos números esão no array, usado para o for.
	int entrada = 1;    // Se 1, continua o loop que popula o array. Se 0, para o contador.
	char continua;		// Verifica se o usuário deseja adicionar mais um número.
	int numeros[100];
	
	while (entrada == 1) {
		if(contador <= 99) {
			printf("\nPor favor, digite um numero: ");
			scanf("%d", &numeros[contador]);

			printf("Voce ainda pode adicionar %d numeros. Deseja adicionar outro? (s/n) ", 100-contador);
			scanf(" %c", &continua);
			
			if (continua == 'n' || continua == 'N') {
				entrada = 0;
			}	
			contador++;
		} else {
			entrada = 0;
		}
	}

	printf("\nSeu array e: ");
	for(i = 0; i < contador; i++) {
		printf("%d ", numeros[i]);
	}
	return 0;
}
