// Iniciante - 1017 - Gasto de Combust�vel

#include <stdio.h>

int main(){
	
	int tempo, velMedia;
	double qtdeLitros;
	
	scanf("%d %d", &tempo, &velMedia);
	qtdeLitros = (double) (tempo * velMedia) / 12;
	printf("%.3lf\n", qtdeLitros);
	
	return 0;
}
