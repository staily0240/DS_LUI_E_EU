#include <stdio.h>

int main() {
    int quantidadeClientes = 100;
    int idade, totalMenoresIdade = 0, totalMaioresIdade = 0;
    float mediaIdadeMaioresIdade = 0;
    
    for (int i = 1; i <= quantidadeClientes; i++) {
        printf("Informe a idade da pessoa %d: ", i);
        scanf("%d", &idade);
        
        if (idade < 18) {
            totalMenoresIdade++;
        } else {
            totalMaioresIdade++;
            mediaIdadeMaioresIdade += idade;
        }
    }
    
    if (totalMaioresIdade > 0) {
        mediaIdadeMaioresIdade /= totalMaioresIdade;
    }
    
    printf("Quantidade de pessoas menores de idade: %d\n", totalMenoresIdade);
    printf("Media de idade das pessoas maiores de idade: %.2f\n", mediaIdadeMaioresIdade);
    
    return 0;
}
