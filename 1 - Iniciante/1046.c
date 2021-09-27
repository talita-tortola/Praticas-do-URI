// Iniciante - 1046 - Tempo de Jogo

#include <stdio.h>

int main(){
	
	int hr1, hr2, hrTotal;
	
	scanf("%d %d", &hr1, &hr2);
	
	hrTotal = (24 - hr1) + hr2;
	
	if(hrTotal > 24)
		hrTotal -= 24;
		
	printf("O JOGO DUROU %d HORA(S)\n", hrTotal);
	
	return 0;
}
