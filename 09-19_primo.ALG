Algoritmo "semnome"
// 
//  
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 19/09/2023
Var
// Se��o de Declara��es das vari�veis 
i,n:inteiro
eprimo:caractere

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 

escreva("Escreva um n�mero: ")
leia(n)
escreval("")
eprimo <- "V"

para i de 2 ate (n-1) passo 1 faca

     se (n%i=0) entao
        eprimo <- "F"
     fimse
     
fimpara

se (eprimo="V") e (n<>1) entao
     escreval(n," � primo!")
senao
     escreval(n," n�o � primo.")
fimse

Fimalgoritmo