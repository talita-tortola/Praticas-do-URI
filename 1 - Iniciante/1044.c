// Iniciante - 1044 - Múltiplos

#include <stdio.h>

int main(){
	
	int x, y;
	
	scanf("%d %d", &x, &y);
	
	if(x < y)
	{
		if(y % x == 0)
			printf("Sao Multiplos\n");
		else
			printf("Nao sao Multiplos\n");
	}
	else
	{
		if(x % y == 0)
			printf("Sao Multiplos\n");
		else
			printf("Nao sao Multiplos\n");
	}
	
	
	return 0;
}
