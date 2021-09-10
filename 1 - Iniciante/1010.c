// Iniciante - 1010 - Cálculo Simples

#include <stdio.h>

int main(){
	
	int codPec1, qtdePec1, codPec2, qtdePec2;
	double valUnitPec1, valUnitPec2, valTotal;

	scanf("%d %d %lf", &codPec1, &qtdePec1, &valUnitPec1);
	scanf("%d %d %lf", &codPec2, &qtdePec2, &valUnitPec2);
	
	valTotal = qtdePec1 * valUnitPec1 + qtdePec2 * valUnitPec2;
	printf("VALOR A PAGAR: R$ %.2lf\n", valTotal);
	
	return 0;
}
