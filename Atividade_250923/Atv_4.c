#include <stdio.h>

int main() {
    int numero;
    int maior = 0; 

    while (1) { 
        printf("Digite um número ou digite 0 para parar: ");
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }

        if (numero > maior) {
            maior = numero; 
        }
    }

    if (maior != 0) {
        printf("O maior número digitado é: %d\n", maior);
    } else {
        printf("Nenhum número válido foi digitado.\n");
    }

    return 0;
}
