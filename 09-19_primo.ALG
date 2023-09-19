Algoritmo "semnome"
// 
//  
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 19/09/2023
Var
// Seção de Declarações das variáveis 
i,n:inteiro
eprimo:caractere

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 

escreva("Escreva um número: ")
leia(n)
escreval("")
eprimo <- "V"

para i de 2 ate (n-1) passo 1 faca

     se (n%i=0) entao
        eprimo <- "F"
     fimse
     
fimpara

se (eprimo="V") e (n<>1) entao
     escreval(n," é primo!")
senao
     escreval(n," não é primo.")
fimse

Fimalgoritmo