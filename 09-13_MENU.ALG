Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 13/09/2023
Var
   // Seção de Declarações das variáveis
   lin:vetor[1..8] de caracter
   cod,i:inteiro

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...


   lin[1]<- ("------------ M E N U -----------")
   lin[2]<-("")
   lin[3]<-("CÓD       PRATO         VALOR   ")
   lin[4]<-("1      Picanha          R$ 25,00")
   lin[5]<-("2      Lasanha          R$ 20,00")
   lin[6]<-("3      Strogonoff       R$ 18,00")
   lin[7]<-("4      Bife Acebolado   R$ 15,00")
   lin[8]<-("5      Pão com ovo      R$ 5,00")

   para i de 1 ate 8 faca
      escreval(lin[i])
   fimpara
   escreval("")

   escreval("Digite o código do prato desejado:")
   leia(cod)
   escreval("")

   enquanto (cod<>1) e (cod<>2) e (cod<>3) e (cod<>4) e (cod<>5) faca
      limpatela

      para i de 1 ate 8 faca
         escreval(lin[i])
      fimpara
      escreval("")
      escreval("Por favor, insira um código válido:")
      leia(cod)
      escreval("")
   fimenquanto

   escreval("----P R A T O  S E L E C I O N A D O----")
   escolha cod
   caso 1
   escreval("Picanha          R$ 25,00")
   caso 2
   escreval("Lasanha          R$ 20,00")
   caso 3
   escreval("Strogonoff       R$ 18,00")
   caso 4
   escreval("Bife Acebolado   R$ 15,00")
   outrocaso
   escreval("Pão com ovo      R$ 5,00")
   fimescolha






Fimalgoritmo
