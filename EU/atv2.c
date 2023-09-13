#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int n1, n2, resultado;
	
	printf("Digite o primeiro valor:");
	scanf("%d", &n1);
	
	printf("Digite o segundo valor:");
	scanf("%d", &n2);
	
	resultado = n1 + n2;
	
	printf("O resultado da soma de %d e %d é %d", n1,n2,resultado);
}
