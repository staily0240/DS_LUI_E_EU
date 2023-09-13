#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	float n1, n2, resultado;
	
	printf("Entre com o primeiro valor:");
	scanf("%f", &n1);
	
	printf("Entre com o segundo valor:");
	scanf("%f", &n2);
	
	resultado = n1 + n2;
	
	printf("O resultado da soma de %f e %f é %f", n1,n2,resultado);
}
