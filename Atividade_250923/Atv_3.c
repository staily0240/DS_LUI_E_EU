#include <stdio.h>

int main() {
    int numero;

    while (1) { 
        printf("Digite um número entre 1 e 10: ");
        scanf("%d", &numero);

        if (numero < 1 || numero > 10) {
            printf("Número invalido. Encerrando o programa.\n");
            break; 
        } else {
            printf("Número válido: %d\n", numero);
        }
    }

    return 0;
}
