// Iniciante - 1013 - O Maior - Resolução 2

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int x, y, z, maior, maior2;
	
	scanf("%d %d %d", &x, &y, &z);
	
	maior = (x+y+abs(x-y)) / 2;
	maior2 = (maior+z+abs(maior-z)) / 2;
	
	
	printf("%d eh o maior\n", maior2);
	
	return 0;
}
