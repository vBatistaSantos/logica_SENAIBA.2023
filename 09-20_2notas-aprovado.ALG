Algoritmo "semnome"
//
//
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 20/09/2023
Var
   // Se��o de Declara��es das vari�veis
   i, nota:inteiro
   media: real


Inicio
   // Se��o de Comandos, procedimento, fun��es, operadores, etc...


   para i de 1 ate 2 passo 1 faca

      escreva("Informe a",i,"� nota: ")
      leia(nota)

      enquanto (nota<0) ou (nota>10) faca

         escreva("Por favor, informe uma nota v�lida: ")
         leia(nota)

      fimenquanto
      
      escreval("")
      
      media <- media + nota

   fimpara
   
   media <- media/2
   

   
   escreval("Sua m�dia �: ",media)
      escolha media
             caso >=7
             escreval("Parab�ns, voc� est� aprovado!")
             caso >=5
             escreval("Voc� est� de recupera��o, boa sorte!")
             outrocaso
             escreval("Voc� est� reprovado")
   fimescolha
   
   escreval("")
   


Fimalgoritmo