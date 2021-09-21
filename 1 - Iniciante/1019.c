// Iniciante - 1019 - Conversão de Tempo

#include <stdio.h>

int main(){
	
	int N, hr, min, seg;
	
	scanf("%d", &N);
	
	if(N <= 59)
	{
		seg = N;
		min = 0;
		hr = 0;
	}
	else if(N <= 3599)
	{
		seg = N % 60;
		min = N / 60;
		hr = 0;
	}
	else
	{
		seg = N % 60;
		min = (N / 60) % 60;
		hr = (N / 60) / 60;
	}
	
	printf("%d:%d:%d\n", hr, min, seg);
	
	return 0;
}
