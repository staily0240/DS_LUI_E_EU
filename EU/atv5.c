#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	float n1, n2, n3, resultado;
	
	printf("Entre com o primeiro valor:");
	scanf("%f", &n1);
	
	printf("Entre com o segundo valor:");
	scanf("%f", &n2);
	
	printf("Entre com o terceiro valor:");
	scanf("%f", &n3);
	
	resultado = (n1 + n2 + n3)/3;
	
	printf("A média dos números %f, %f e %f é %f", n1,n2,n3,resultado);
}
