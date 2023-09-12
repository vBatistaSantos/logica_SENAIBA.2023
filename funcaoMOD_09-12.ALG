Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 12/09/2023

// PAR OU IMPAR
Var
   // Seção de Declarações das variáveis
   nmr: inteiro

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreva("Digite um número: ")
   leia(nmr)
   escreval("")

   enquanto nmr<>0 entao
      se nmr%2=0 entao
         escreval(nmr," É PAR")
         leia(nmr)
      senao
         escreval(nmr," É IMPAR")
         leia(nmr)
      fimse
   fimenquanto




Fimalgoritmo