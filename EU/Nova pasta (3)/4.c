#include <stdio.h>

int main() {
    int vetor[10];
    int menor;

    printf("Digite 10 valores inteiros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    menor = vetor[0];

    for (int i = 1; i < 10; i++) {
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }

    printf("O menor valor no vetor é: %d\n", menor);

    return 0;
}


