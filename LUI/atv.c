#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void alunosMaiores(){
	printf("Quantidade de alunos com mais de 10 anos.");
}
void menor(){
	printf("Ver informações do aluno mais novo da turma.");
}
void pares(){
	printf("Alunos com idades impares e idades pares.");
}
void comparar(){
	printf("Comparar idades com valor informado.");
}
void sair(){
	printf("Obrigada por utilizar do nosso sistema.");
}

int main(void) {
	int i;
	typedef struct {
		char nome[40], sexo[10];
		int idade;
	} Alunos;
Alunos alu[10];


for(i=1; i<11; i++){
	printf("Informe o nome do %d aluno:", i);
	scanf("%s", &alu[i].nome);
	printf("Informe o sexo do aluno:");
	scanf("%s", &alu[i].sexo);
	printf("Informe a idade do aluno:");
	scanf("%d", &alu[i].idade);
	printf("\n");
}
system("cls || clear");

printf("Agora informe a operação que deseja realizar:\n");

	int continuar=1;
do{
	printf("1. Quantidade de alunos com mais de 10 anos. \n");
	printf("2. Ver informações do aluno mais novo da turma. \n");
	printf("3. Alunos com idades impares e idades pares. \n");
	printf("4. Comparar idades com valor informado. \n");
	printf("5. Obrigada por utilizar do nosso sistema. \n");
	
	scanf("%d", &continuar);
	system("cls || clear");
	
	switch(continuar){
		case 1:
			alunosMaiores();
			
			break;
		
		case 2:
			menor();
			break;
			
		case 3:
			pares();
			break;
			
		case 4:
			comparar();
			break;
			
		case 5:
			sair();
			break;
			
		default:
			printf("Opção inválida \n");
	}
} while(continuar);
}
