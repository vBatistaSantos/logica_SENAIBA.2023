Algoritmo "semnome"
//
//
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 19/09/2023
Var
   // Se��o de Declara��es das vari�veis
   i,n,par,impar:inteiro

Inicio
   // Se��o de Comandos, procedimento, fun��es, operadores, etc...
   para i de 1 ate 5 passo 1 faca

      escreval("Escreva o ",i,"� n�mero: ")
      leia(n)

      se (n%2=0) entao
         par <- par + 1
      senao
         impar <- impar + 1
      fimse
      
      limpatela

   fimpara
   
   escreval("")
   escreval("N�meros Impar: ",impar)
   escreval("N�meros Par: ",par)

Fimalgoritmo