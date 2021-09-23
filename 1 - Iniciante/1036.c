// Iniciante - 1036 - Fórmula de Bhaskara

#include <stdio.h>
#include <math.h>

int main(){
	
	double a, b, c, delta, denominador, raiz1, raiz2;
	
	scanf("%lf %lf %lf", &a, &b, &c);
	
	delta = pow(b,2) - 4 * a * c;
	denominador = 2 * a;
	
	if(delta < 0 || denominador == 0)
		printf("Impossivel calcular\n");
	else
	{
		raiz1 = (-b + sqrt(delta)) / denominador;
		raiz2 = (-b - sqrt(delta)) / denominador;
		printf("R1 = %.5lf\n", raiz1);
		printf("R2 = %.5lf\n", raiz2);
	}
	
	return 0;
}
