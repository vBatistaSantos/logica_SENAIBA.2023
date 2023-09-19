Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 12/09/2023
Var
   // Seção de Declarações das variáveis
   peso, altura: real
   sexo: caracter
   invalido: logico

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...

   escreva("Informe sua altura: ")
   leia(altura)
   escreval("")
   escreval("Informe seu sexo: ")
   escreval("M - homem")
   escreval("F - mulher")
   escreval("")
   leia(sexo)
   escreval("")

   se (sexo="M") ou (sexo="F") ou (sexo="homem") ou (sexo="mulher") entao

      invalido <- FALSO

   senao

      invalido <- VERDADEIRO

   fimse


   enquanto invalido faca

      escreval("Por favor, insira uma das opções abaixo: ")
      escreval("M - homem")
      escreval("F - mulher")
      leia (sexo)
      escreval("")

   fimenquanto
   
   se (sexo = "M") ou (sexo = "homem") entao
   
   peso <-(72.7 * altura)-58
   
   senao
   
   peso <-(62.1 * altura)-44.7
   
   fimse

   escreval("Seu peso ideal é ",peso)

   //homem (72.7 *h) - 58
   //mulher (62.1 * h) - 44.7







Fimalgoritmo
