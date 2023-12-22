#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define TAM 3

float matriz[TAM][TAM];
float media;
float maiorMedia = 0;
float menorMedia = 20;
int i, j, aluno = 1;
char nome, busca[50];
int voltar;

typedef struct {
    char nome[30];
    int idade;
    char sexo[10];
    float altura;
}Pessoa;

Pessoa listaPessoa[TAM];

void questao1(){
    printf("Preencha a nota dos alunos:\n");
    for(i = 0; i < TAM; i++){
        printf("Informe o nome do %dº aluno:", aluno);
        scanf("%s", &nome);
        printf("Digite a nota do aluno %s na primeira unidade:", &nome);
        scanf("%f", &matriz[i][0]);
        printf("Digite a nota do aluno %s na segunda unidade:", &nome);
        scanf("%f", &matriz[i][1]);
        printf("\n");
        matriz[i][2] = (matriz[i][0] + matriz[i][1]) / 2;
        aluno++;
        
        if(matriz[i][2] > maiorMedia){
            maiorMedia = matriz[i][2];
        }
        
        if(matriz[i][2] < menorMedia){
            menorMedia = matriz[i][2];
        }
    }
    printf("A média mais alta é %.2f\n", maiorMedia);
    printf("A média mais baixa é %.2f\n", menorMedia);
    
    aluno = 1;
    for(i=0; i<3; i++){
        printf("\nNota do %dº aluno na primeira unidade: %.2f\n", aluno, matriz[i][0]);
        printf("Nota do %dº aluno na segunda unidade: %.2f\n", aluno, matriz[i][1]);
        printf("A média do %dº aluno é: %.2f\n", aluno, matriz[i][2]);
    
        if(matriz[i][2] >=7){
        printf("Aluno APROVADO\n");
        }else{
        printf("Aluno REPROVADO\n");
        }
        aluno++;
    }
}

void preencherVetor(Pessoa l[TAM]){
    for(i = 0; i < TAM; i++){
        printf("\nInforme o nome da pessoa:");
        getchar();
        fgets(l[i].nome, 30, stdin);
        printf("Informe a idade da pessoa:");
        scanf("%d", &l[i].idade);
        printf("Informe o sexo da pessoa:");
        scanf("%s", l[i].sexo);
        printf("Informe a altura da pessoa:");
        scanf("%f", &l[i].altura);
    }
}

void imprimirVetor(Pessoa l[TAM]){
    for(i = 0; i < TAM; i++){
        printf("\nNome: %s", l[i].nome);
        printf("Idade: %d", l[i].idade);
        printf("\nSexo: %s", l[i].sexo);
        printf("\nAltura: %.2f\n", l[i].altura);
    }
}

void mediaAltura(Pessoa l[TAM]){
    float soma = 0;
        for(i = 0; i < TAM; i++){
            soma += l[i].altura;
        }
        float mediaAlt = soma / TAM;
        printf("Média de alturas cadastradas: %.2f", mediaAlt);
}

void pessoasVelhas(Pessoa l[TAM]){
    printf("Pessoas com mais de 25 anos de idade:");
                for(i = 0; i < TAM; i++){
                    if(l[i].idade > 25){
                        printf("\n %dª pessoa\n", i+1);
                        printf("\nNome: %s", l[i].nome);
                        printf("Idade: %d", l[i].idade);
                        printf("\nSexo: %s", l[i].sexo);
                        printf("\nAltura: %.2f\n", l[i].altura);
                    }
                }
}

void maisVelha(Pessoa l[TAM]){
    int maisVelho = 0;
                for(i = 0; i < TAM; i++){
                    if(l[i].idade > maisVelho){
                        maisVelho = i;
                    }
                }
    printf("Nome: %s", l[maisVelho].nome);
	printf("Idade: %d\n", l[maisVelho].idade);
	printf("Sexo: %s\n", l[maisVelho].sexo);
	printf("Altura: %.2f\n", l[maisVelho].altura);
}

void Menu2(){
    int opcao;
    do{
        printf("\nSelecione a função que deseja realizar:");
        printf("\n1. Imprimir os dados do vetor");
        printf("\n2. Imprimir média das alturas cadastradas");
        printf("\n3. Imprimir dados das pessoas maiores de 25 anos");
        printf("\n4. Imprimir o nome da pessoa mais velha");
        printf("\n5. Buscar uma pessoa pelo nome e mostrar seus dados");
        printf("\n0.Voltar para o menu inicial\n");
        scanf("%d", &opcao);
        switch(opcao){
            case 1:
                imprimirVetor(listaPessoa);
                printf("\nDigite 0 para realizar outra funçao ou qualquer outro número para encerrar o programa");
                scanf("%d", &voltar);
                if(voltar == 0){
                    break;
                }else{
                    exit(0);
                }
                
            case 2:
                mediaAltura(listaPessoa);
                printf("\nDigite 0 para realizar outra funçao ou qualquer outro número para encerrar o programa");
                scanf("%d", &voltar);
                if(voltar == 0){
                    break;
                }else{
                    exit(0);
                }
                
            case 3:
                pessoasVelhas(listaPessoa);
                printf("\nDigite 0 para realizar outra funçao ou qualquer outro número para encerrar o programa");
                scanf("%d", &voltar);
                if(voltar == 0){
                    break;
                }else{
                    exit(0);
                }
                
            case 4:
                maisVelha(listaPessoa);
                printf("\nDigite 0 para realizar outra funçao ou qualquer outro número para encerrar o programa");
                scanf("%d", &voltar);
                if(voltar == 0){
                    break;
                }else{
                    exit(0);
                }
                
            case 5:
                
                printf("\nDigite 0 para realizar outra funçao ou qualquer outro número para encerrar o programa");
                scanf("%d", &voltar);
                if(voltar == 0){
                    break;
                }else{
                    exit(0);
                }
                
            case 0:
                return;
        }
    }while(opcao != 0);
}

void questao2(){
    preencherVetor(listaPessoa);
    Menu2();
    
}

void Menu(){
    int op;
    do{
        printf("------------Bem vindo a avaliação da aluna Luise---------------\n");
        printf("\nEscolha qual questão deseja corrigir:\n");
        printf("1. Corrigir primeira questão.\n");
        printf("2. Corrigir segunda questão.\n");
        printf("0. Sair\n");
        scanf("%d", &op);
        system("cls");
        switch (op){
            case 1:
                questao1();
                printf("\nDigite 0 para voltar ao menu:");
                scanf("%d", &voltar);
                if(voltar == 0){
                    printf("\n");
                break;}
                
            case 2:
                questao2();
                break;
                
            case 0:
                printf("Saindo...");
                break;
                
            default:
                printf("Opção inválida. Tente novamente");
        }
    }while(op != 0);
}

int main(){
    Menu();

    return 0;
}
