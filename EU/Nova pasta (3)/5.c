#include <stdio.h>

int main() {
    int vetor[10];
    int numeroProcurado;
    int encontrou = 0; 

    printf("Digite 10 valores inteiros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Digite o numero que deseja procurar: ");
    scanf("%d", &numeroProcurado);

    for (int i = 0; i < 10; i++) {
        if (vetor[i] == numeroProcurado) {
            printf("O numero %d foi encontrado na posicao %d do vetor.\n", numeroProcurado, i);
            encontrou = 1; 
            break; 
        }
    }
    
    if (!encontrou) {
        printf("O numero %d nao foi encontrado no vetor.\n", numeroProcurado);
    }

    return 0;
}
