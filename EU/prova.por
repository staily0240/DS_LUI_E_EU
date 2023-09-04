programa
{
     

	funcao inicio()
	{

	cadeia nome

	cadeia resposta 

	inteiro nota, contador
	
	escreva("escreva o nome do aluno:")
	leia(nome)
	escreva ("escreva a nota do aluno:")
	leia(nota)
	
	se (nota >= 0 e nota <= 49)
		escreva( nome, " esta com o conceito insuficiente. ")

	senao se (nota >= 50 e nota <= 64)
		escreva(nome, " esta com o conceito regular. ")

	senao se (nota >= 65 e nota <= 84)
		escreva (nome, " esta com o conceito bom. ")

	senao se (nota >= 85 e nota <= 100)
		escreva(nome, " esta com o conceito otimo. ")
	senao
		escreva("numero invalido. ")

	     escreva("se quiser testar novamente digite sim: ")
	     leia(resposta)

          enquanto(resposta == "sim") {

	escreva("escreva o nome do aluno:")
	leia(nome)
	escreva ("escreva a nota do aluno:")
	leia(nota)
	
	se (nota >= 0 e nota <= 49)
		escreva( nome, " esta com o conceito insuficiente. ")

	senao se (nota >= 50 e nota <= 64)
		escreva(nome, " esta com o conceito regular. ")

	senao se (nota >= 65 e nota <= 84)
		escreva (nome, " esta com o conceito bom. ")

	senao se (nota >= 85 e nota <= 100)
		escreva(nome, " esta com o conceito otimo. ")
	senao
		escreva("numero invalido. ")

	se(resposta == "não"){
		escreva("programa finalizado")
	}
          }
}
}
