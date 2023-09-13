#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

	int n1, n2, r1, r2;
	
	printf("Entre com o primeiro valor:");
	scanf("%d", &n1);
	
	printf("Entre com o segundo valor:");
	scanf("%d", &n2);
	
	r1 = n1/2;
	r2 = n2*3;
	
	printf("Resultados:\n %d / 2 = %d \n%d * 3 = %d", n1,r1,n2,r2);
}
