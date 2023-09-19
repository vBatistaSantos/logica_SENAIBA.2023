Algoritmo "semnome"
//
//
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 19/09/2023
Var
   // Seção de Declarações das variáveis
   i, divi:inteiro

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...

   escreva("Informe um numero inteiro entre 0 e 100: ")
   leia(divi)
   escreval("")

   escreval("Os números divisiveis por ", divi," de 1 a 100 são: ")

   para i de 1 ate 100 passo 1 faca

      se (i%divi=0) entao
         escreval(i)
      fimse

   fimpara

Fimalgoritmo