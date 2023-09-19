Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 13/09/2023
Var
   // Seção de Declarações das variáveis
   preco, opcao,parcela:real

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreva("Informe o preco do produto: ")
   leia(preco)
   escreval("")
   escreval("Escolha uma forma de pagamento: ")
   escreval("1 - Pagamento à vista")
   escreval("2 - Pagamento à prazo")
   leia(opcao)
   escreval("")

   escolha opcao
   caso 1
      preco <- preco * 0.9
      escreval("O valor do produto é R$", preco:3:2)
   caso 2
      escreva("Escolha o número de parcela (máximo de 6 parcelas):")
      leia(parcela)
      escreval("O valor de cada parcela é R$",(preco/parcela):3:2)
   outrocaso
   fimescolha
   

Fimalgoritmo