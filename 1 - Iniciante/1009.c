// Iniciante - 1009 - Sal�rio com B�nus

#include <stdio.h>

int main(){
	
	char nome[20];
	double salFixo, totalVendas, salFinal;
	
	scanf("%s %lf %lf", &nome, &salFixo, &totalVendas);
	salFinal = salFixo + (totalVendas * 0.15);
	printf("TOTAL = R$ %.2lf\n", salFinal);
	
	return 0;
}
