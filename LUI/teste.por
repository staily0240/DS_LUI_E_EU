programa
{
//Autor:Sereia
	
	funcao inicio()
	{
	   inteiro nota, rep
	   cadeia nome, resp
	   
		escreva("Bem vindo! Para verificar insira as informações pedidas: \n")
		escreva("Nome do aluno: ")
		leia(nome)

		escreva("Nota do aluno: ")
		leia(nota)

		escreva("\n")

          se(nota <=49)
	     escreva("Aluno: ", nome, "\nNota: ", nota, "\nConceito: Insuficiente" )
	     
	     senao se(nota >49 e nota <=64)
	     escreva("Aluno: ", nome, "\nNota: ", nota, "\nConceito: Regular" )
	     
	     senao se(nota >64 e nota <=84)
	     escreva("Aluno: ", nome, "\nNota: ", nota, "\nConceito: Bom" )
	     
	     senao se(nota >84 e nota <=100)
	     escreva("Aluno: ", nome, "\nNota: ", nota, "\nConceito: Ótimo" )

	     senao
	     escreva("\nNota inválida.")

	     escreva("\nDeseja continuar avaliando notas? \nDigite sim para continuar: ")
	     leia(resp)

          enquanto(resp == "sim") 
		{
          escreva("\n")
          
	     escreva("Nome do aluno: ")
		leia(nome)

		escreva("Nota do aluno: ")
		leia(nota)

		escreva("\n")

	     se(nota <=49)
	     escreva("Aluno: ", nome, "\nNota: ", nota, "\nConceito: Insuficiente" )
	     
	     senao se(nota >49 e nota <=64)
	     escreva("Aluno: ", nome, "\nNota: ", nota, "\nConceito: Regular" )
	     
	     senao se(nota >64 e nota <=84)
	     escreva("Aluno: ", nome, "\nNota: ", nota, "\nConceito: Bom" )
	     
	     senao se(nota >84 e nota <=100)
	     escreva("Aluno: ", nome, "\nNota: ", nota, "\nConceito: Ótimo" )

	     senao
	     escreva("\nNota inválida.")

	     escreva("\nDeseja continuar avaliando notas? \nDigite sim para continuar: ")
	     leia(resp)

	     
		}


		se(resp != "sim"){
			 escreva("Encerrando programa. Obrigada pela preferência")
		}
	}
}
