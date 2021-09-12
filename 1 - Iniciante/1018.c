// Iniciante - 1018 - Cédulas

#include <stdio.h>

int main(){
	
	int N;
	int cem = 0;
	int cinq = 0;
	int vinte = 0;
	int dez = 0;
	int cinco = 0;
	int dois = 0;
	int um = 0;
	
	scanf("%d", &N);
	
	if(N > 0 && N < 1000000)
	{
		printf("%d\n", N);
		
		do
		{
			if(N >= 100)
			{
				N -= 100;
				cem++;
			}
			else if(N >= 50)
			{
				N -= 50;
				cinq++;
			}
			else if(N >= 20)
			{
				N -= 20;
				vinte++;
			}
			else if(N >= 10)
			{
				N -= 10;
				dez++;
			}
			else if(N >= 5)
			{
				N -= 5;
				cinco++;
			}
			else if(N >= 2)
			{
				N -= 2;
				dois++;
			}
			else if(N >= 1)
			{
				N -= 1;
				um++;
			}
		}while(N > 0);
		
		printf("%d nota(s) de R$ 100,00\n", cem);
		printf("%d nota(s) de R$ 50,00\n", cinq);
		printf("%d nota(s) de R$ 20,00\n", vinte);
		printf("%d nota(s) de R$ 10,00\n", dez);
		printf("%d nota(s) de R$ 5,00\n", cinco);
		printf("%d nota(s) de R$ 2,00\n", dois);
		printf("%d nota(s) de R$ 1,00\n", um);
	}
	
	return 0;
}
