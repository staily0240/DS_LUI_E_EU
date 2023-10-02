#include <stdio.h>

int main() {
    int numeros[50];
    int soma = 0;
    int quantidadeNumerosValidos = 0;

    printf("Digite 50 numeros inteiros:\n");
    for (int i = 0; i < 50; i++) {
        scanf("%d", &numeros[i]);
        
        if (numeros[i] >= 10 && numeros[i] <= 150) {
            soma += numeros[i];
            quantidadeNumerosValidos++;
        }
    }
    if (quantidadeNumerosValidos > 0) {
        float media = (float)soma / quantidadeNumerosValidos;
        printf("A media dos numeros no intervalo entre 10 e 150 é: %.2f\n", media);
    } else {
        printf("Nenhum numero no intervalo entre 10 e 150 foi inserido.\n");
    }

    return 0;
}
