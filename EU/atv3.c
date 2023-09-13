#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int n1, n2, n3, resultado;
	
	printf("Digite o primeiro valor:");
	scanf("%d", &n1);
	
	printf("Digite o segundo valor:");
	scanf("%d", &n2);
	
	printf("Digite o terceiro valor:");
	scanf("%d", &n3);
	
	resultado = n1 * n2 * n3;
	
	printf("O resultado da multiplicação de %d, %d e %d é %d", n1,n2,n3,resultado);
}
