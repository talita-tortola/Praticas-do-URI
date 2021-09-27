// Iniciante - 1043 - Triângulo

#include <stdio.h>

int main(){
	
	double a, b, c, x, y, z;
	
	scanf("%lf %lf %lf", &a, &b, &c);
	
	x = b - c;
	y = a - c;
	z = a - b;
	
	if(x < 0)
		x *= -1;
	if(y < 0)
		y *= -1;
	if(z < 0)
		z *= -1;
	
	if((((x < a) && (a < b + c)) && ((y < b) && (b < a + c))) && ((z < c) && (c < a + b)))
		printf("Perimetro = %.1lf\n", a + b + c);
	else
		printf("Area = %.1lf\n", (((a + b) * c) / 2.0));
		
	return 0;
}
