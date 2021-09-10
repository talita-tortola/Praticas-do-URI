// Iniciante - 1012 - Área

#include <stdio.h>
#include <math.h>

int main(){
	
	double A, B, C, triangulo, circulo, trapezio, quadrado, retangulo;
	double pi = 3.14159;
	
	scanf("%lf %lf %lf", &A, &B, &C);
	
	triangulo = (A * C) / 2;
	circulo = pi * pow(C,2);
	trapezio = ((A + B) * C) / 2;
	quadrado = pow(B,2);
	retangulo = A * B;
	
	printf("TRIANGULO: %.3lf\n", triangulo);
	printf("CIRCULO: %.3lf\n", circulo);
	printf("TRAPEZIO: %.3lf\n", trapezio);
	printf("QUADRADO: %.3lf\n", quadrado);
	printf("RETANGULO: %.3lf\n", retangulo);
	
	return 0;
}
