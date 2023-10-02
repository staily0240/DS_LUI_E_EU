#include <stdio.h>
#include <stdbool.h>

bool ehPrimo(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int matriz[4][4];
    
    printf("Digite 16 valores para preencher a matriz 4x4:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    int opcao;
    printf("\nMenu:\n");
    printf("1 - Imprimir todos os valores e posições\n");
    printf("2 - Imprimir somente os números pares\n");
    printf("3 - Imprimir somente os números primos\n");
    printf("4 - Imprimir somente os números ímpares\n");
    printf("5 - Imprimir somente os números divisíveis por 10\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);
    
    switch (opcao) {
        case 1:
            printf("\nTodos os valores e posições na matriz:\n");
            for (int i = 0; i < 4; i++) {
                for (int j = 0; j < 4; j++) {
                    printf("%d\t", matriz[i][j]);
                }
                printf("\n");
            }
            break;
        case 2:
            printf("\nNúmeros pares na matriz:\n");
            for (int i = 0; i < 4; i++) {
                for (int j = 0; j < 4; j++) {
                    if (matriz[i][j] % 2 == 0) {
                        printf("%d\t", matriz[i][j]);
                    }
                }
            }
            break;
        case 3:
            printf("\nNúmeros primos na matriz:\n");
            for (int i = 0; i < 4; i++) {
                for (int j = 0; j < 4; j++) {
                    if (ehPrimo(matriz[i][j])) {
                        printf("%d\t", matriz[i][j]);
                    }
                }
            }
            break;
        case 4:
            printf("\nNúmeros ímpares na matriz:\n");
            for (int i = 0; i < 4; i++) {
                for (int j = 0; j < 4; j++) {
                    if (matriz[i][j] % 2 != 0) {
                        printf("%d\t", matriz[i][j]);
                    }
                }
            }
            break;
        case 5:
            printf("\nNúmeros divisíveis por 10 na matriz:\n");
            for (int i = 0; i < 4; i++) {
                for (int j = 0; j < 4; j++) {
                    if (matriz[i][j] % 10 == 0) {
                        printf("%d\t", matriz[i][j]);
                    }
                }
            }
            break;
        default:
            printf("\nOpção inválida!\n");
    }

    return 0;
}
