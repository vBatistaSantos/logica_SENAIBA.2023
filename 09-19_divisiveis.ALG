Algoritmo "semnome"
//
//
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 19/09/2023
Var
   // Se��o de Declara��es das vari�veis
   i, divi:inteiro

Inicio
   // Se��o de Comandos, procedimento, fun��es, operadores, etc...

   escreva("Informe um numero inteiro entre 0 e 100: ")
   leia(divi)
   escreval("")

   escreval("Os n�meros divisiveis por ", divi," de 1 a 100 s�o: ")

   para i de 1 ate 100 passo 1 faca

      se (i%divi=0) entao
         escreval(i)
      fimse

   fimpara

Fimalgoritmo