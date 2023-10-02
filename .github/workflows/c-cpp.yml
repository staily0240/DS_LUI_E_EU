nome = (input ("entre com seu nome:"))

endereco = input("entre com seu endereço: ")
if endereco.replace('.', '', 1).isdigit():
    numero = float(endereco)

telefone = (input("entre com seu numero:"))
if telefone.replace('.', '', 1).isdigit():
    numero = float(telefone)

cep = input("entre com seu cep: ")
if cep.replace('.', '', 1).isdigit():
    numero = float(cep)

idade = input("entre com sua idade: ")
if idade.replace('.', '', 1).isdigit():
    numero = float(idade)

Saldo_atual = 0 

sexo = (input("entre com seu sexo:"))

Info = nome, endereco, telefone, cep, idade, sexo, Saldo_atual

palavra_chave = "info" or "Info"
while True:
    entrada = input("if you need help send info:")

    if palavra_chave in entrada:
        print(Info)
        break

while True:
    try:
        entrada = float(input("Digite o valor a ser adicionado ou subtraído : "))
        
        if entrada == 0:
            break
        
        Saldo_atual += entrada
        print("Saldo atual: {:.2f}".format(Saldo_atual))
    except ValueError:
        print("Entrada inválida. Por favor, digite um número válido.")
