// Iniciante - 1045 - Tipos de Triângulos

#include <stdio.h>
#include <math.h>

int main(){
	
	double x, y, z, a, b, c;
	
	scanf("%lf %lf %lf", &x, &y, &z);
	
	if(x > y)
	{
		if(x > z)
		{
			a = x;
			if(y > z)
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
		if(y > z)
		{
			a = y;
			if(x > z)
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
	
	if(a >= b + c)
		printf("NAO FORMA TRIANGULO\n");
	else if(pow(a,2) > pow(b,2) + pow(c,2))
		printf("TRIANGULO OBTUSANGULO\n");
	if(pow(a,2) == pow(b,2) + pow(c,2))
		printf("TRIANGULO RETANGULO\n");
	if(pow(a,2) < pow(b,2) + pow(c,2))
		printf("TRIANGULO ACUTANGULO\n");
	if((a == b) && (a == c))
		printf("TRIANGULO EQUILATERO\n");
	if(((((a == b) && (a != c)) || ((a != b) && (a == c))) || ((b == c) && (b != a))))
		printf("TRIANGULO ISOSCELES\n");
	
	return 0;
}
