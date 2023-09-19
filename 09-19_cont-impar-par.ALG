Algoritmo "semnome"
//
//
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 19/09/2023
Var
   // Seção de Declarações das variáveis
   i,n,par,impar:inteiro

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   para i de 1 ate 5 passo 1 faca

      escreval("Escreva o ",i,"º número: ")
      leia(n)

      se (n%2=0) entao
         par <- par + 1
      senao
         impar <- impar + 1
      fimse
      
      limpatela

   fimpara
   
   escreval("")
   escreval("Números Impar: ",impar)
   escreval("Números Par: ",par)

Fimalgoritmo