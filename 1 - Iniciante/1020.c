// Iniciante - 1020 - Idade em Dias

#include <stdio.h>

int main(){
	
	int idadeDias;
	int ano = 0;
	int mes = 0;
	int dia = 0;
	
	scanf("%d", &idadeDias);
	
	do
	{
		if(idadeDias >= 365)
		{
			ano++;
			idadeDias -= 365;
		}
		else if(idadeDias < 365 && idadeDias >= 30)
		{
			mes++;
			idadeDias -= 30;
		}
		else
		{
			dia++;
			idadeDias -= 1;
		}
		
	}while(idadeDias > 0);
	
	printf("%d ano(s)\n", ano);
	printf("%d mes(es)\n", mes);
	printf("%d dia(s)\n", dia);
	
	return 0;
}
