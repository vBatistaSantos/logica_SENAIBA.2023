Algoritmo "semnome"
//
//
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 19/09/2023
Var
   // Seção de Declarações das variáveis
   i,n:inteiro

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreval("---TABUADA---")
   escreval("")
   escreval("Informe o número da Tabuada:")
   leia(n)

   limpatela
   escreval("---TABUADA---")
   escreval("")

   para i de 1 ate 10 passo 1 faca

      se i>9 entao
         escreval(n," x",i," =",n*i)
      senao
         escreval(n," x",i,"  =",n*i)
      fimse


   fimpara



Fimalgoritmo
