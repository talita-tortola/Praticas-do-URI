// Iniciante - 1038 - Lanche

#include <stdio.h>

int main(){
	
	int codigo, qtde;
	double valorPg;
	
	scanf("%d %d", &codigo, &qtde);
	
	switch(codigo)
	{
		case 1:
			valorPg = (double) qtde * 4.00;
		break;
		
		case 2:
			valorPg = (double) qtde * 4.50;
		break;
		
		case 3:
			valorPg = (double) qtde * 5.00;
		break;
		
		case 4:
			valorPg = (double) qtde * 2.00;
		break;
		
		case 5:
			valorPg = (double) qtde * 1.50;
		break;
	} 
	
	printf("Total: R$ %.2lf\n", valorPg);
	
	return 0;
}
