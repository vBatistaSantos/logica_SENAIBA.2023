Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 13/09/2023
Var
   // Seção de Declarações das variáveis
   dia:inteiro

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreva("Insira um número inteiro: ")
   leia(dia)
   escreval("")

   escolha dia
   caso 1
      escreval("DOMINGO  FIM DE SEMANA")
   caso 2
      escreval("SEGUNDA  FIM DE SEMANA")
   caso 3
      escreval("TERÇA    FIM DE SEMANA")
   caso 4
      escreval("QUARTA   FIM DE SEMANA")
   caso 5
      escreval("QUINTA   FIM DE SEMANA")
   caso 6
      escreval("SEXTA    FIM DE SEMANA")
   caso 7
      escreval("SÁBADO   FIM DE SEMANA")
   outrocaso
      escreval("DIA DA SEMANA INVÁLIDO")
   fimescolha

Fimalgoritmo
