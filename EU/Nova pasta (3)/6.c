#include <stdio.h>

int main() {
    int vetor[10];
    int temp; 
    int tamanho = 10;

    printf("Digite 10 valores inteiros:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < tamanho / 2; i++) {
        temp = vetor[i];
        vetor[i] = vetor[tamanho - i - 1];
        vetor[tamanho - i - 1] = temp;
    }
    
    printf("Vetor invertido:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}
