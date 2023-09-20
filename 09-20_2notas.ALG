Algoritmo "semnome"
//
//
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 20/09/2023
Var
   // Seção de Declarações das variáveis
   i, nota:inteiro
   media: real


Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...


   para i de 1 ate 2 passo 1 faca

      escreva("Informe a",i,"º nota: ")
      leia(nota)

      enquanto (nota<0) ou (nota>10) faca

         escreva("Por favor, informe uma nota válida: ")
         leia(nota)

      fimenquanto
      
      escreval("")
      
      media <- media + nota

   fimpara
   
   media <- media/2
   
   escreval("Sua média é: ",media)
   
   escreval("")

   escreva(compr("hello"))
   escreva(pos("i","aeiou"))
   
   


Fimalgoritmo