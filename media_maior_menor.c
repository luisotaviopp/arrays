#include <stdio.h>
#include <stdlib.h>

int pinto = 0;
int i;

int main (void) {
	printf("Quantos cm tem a benga? ");
	scanf("%d", &pinto);
	printf("   O \n");
	printf("  \\ / \n");
	printf("   | \n");
	printf("   8");
	for (i=1; i<=pinto; i++) {
		if ((i % 2) == 0 && i <= 10) {
			printf("*");
		}
	}
	printf("O \n");
	printf("  / \\");
	return 0;	
}
