#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    printf("Tabuada de multiplicação entre %d e %d:\n", num1, num2);

    int menor = (num1 < num2) ? num1 : num2;
    int maior = (num1 > num2) ? num1 : num2;

    for (int i = menor; i <= maior; i++) {
        printf("Tabuada de %d:\n", i);
        for (int j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }

    return 0;
}
