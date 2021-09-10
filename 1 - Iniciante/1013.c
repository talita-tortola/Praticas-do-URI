// Iniciante - 1013 - O Maior

#include <stdio.h>

int main(){
	
	int x, y, z;
	
	scanf("%d %d %d", &x, &y, &z);
	
	if(x>y)
	{
		if(x>z)
		{
			printf("%d eh o maior\n", x);
		}
		else
		{
			printf("%d eh o maior\n", z);
		}
	}
	else
	{
		if(y>z)
		{
			printf("%d eh o maior\n", y);
		}
		else
		{
			printf("%d eh o maior\n", z);
		}
	}
	
	return 0;
}
