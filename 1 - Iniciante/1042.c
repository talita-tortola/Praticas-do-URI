// Iniciante - 1042 - Sort Simples

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int x, y, z, a, b, c;
	
	scanf("%d %d %d", &x, &y, &z);
	
	if(x < y)
	{
		if(x < z)
		{
			a = x;
			if(y < z)
			{
				b = y;
				c = z;
			}
			else
			{
				b = z;
				c = y;
			}
		}
		else
		{
			a = z;
			b = x;
			c = y;
		}
	}
	else
	{
		if(y < z)
		{
			a = y;
			if(x < z)
			{
				b = x;
				c = z;
			}
			else
			{
				b = z;
				c = x;
			}
		}
		else
		{
			a = z;
			b = y;
			c = x;
		}
	}
	
	printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", a, b, c, x, y, z);
	
	return 0;
}
