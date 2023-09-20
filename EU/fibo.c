#include <stdio.h>

int main() {
    int n = 20; 
    int primeiro = 0, segundo = 1, proximo;

    printf("%d\n");

    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            proximo = i;
        } else {
            proximo = primeiro + segundo;
            primeiro = segundo;
            segundo = proximo;
        }
        printf("%d ", proximo);
    }

    printf("\n");

    return 0;
}
