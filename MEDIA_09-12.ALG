Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 12/09/2023
Var
   // Seção de Declarações das variáveis
   nome, conceito: caracter
   n1, n2, media: real

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreva("Informe seu nome: ")
   leia(nome)
   escreva("Informe sua primeira nota: ")
   leia(n1)
   escreva("Informe sua segunda nota: ")
   leia(n2)

   media <- (n1 + n2)/2

   se media >= 9 entao
      conceito <- "A"
      se nao
         se media >= 7.5 entao
            conteito <- "B"
         senao
            se media >= 6 entao
               conceito <- "C"
            senao
               se media >= 4 entao
                  conceito <- "D"
               senao
                  conteico <- "E"
               fimse
            fimse
         fimse
      fimse
   fimse


   limpatela
   escreval("-------MÉDIA----------")
   escreval("NOME: ",nome)
   escreval("PRIMEIRA NOTA: ", n1)
   escreval("SEGUNDA NOTA: ", n2)
   escreval("")
   escreval("MEDIA: ", media," - ",conceito)
   se media >=6 entao
      escreval("APROVADO!")
   senao
      escreval("REPROVADO")
   fimse

Fimalgoritmo