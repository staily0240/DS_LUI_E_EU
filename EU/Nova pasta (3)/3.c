#include <stdio.h>

int main() {
    int tamanho = 10;
    int vetor[tamanho], cubo[tamanho], quadrado[tamanho];
    
    printf("Digite 10 valores inteiros:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }
    
    for (int i = 0; i < tamanho; i++) {
        cubo[i] = vetor[i] * vetor[i] * vetor[i]; 
        quadrado[i] = vetor[i] * vetor[i];
    }
    
    printf("Valores no vetor original:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    
    printf("\nValores no vetor do cubo:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", cubo[i]);
    }
    
    printf("\nValores no vetor do quadrado:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", quadrado[i]);
    }
    
    return 0;
}
