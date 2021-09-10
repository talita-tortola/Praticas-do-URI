// Iniciante - 1008 - Salário

#include <stdio.h>

int main(){
	
	int codFunc, horasTrab;
	double valHora, salario;
	
	scanf("%d %d %lf", &codFunc, &horasTrab, &valHora);
	salario = horasTrab * valHora;
	printf("NUMBER = %d\nSALARY = U$ %.2lf", codFunc, salario);
	
	return 0;
	
}
