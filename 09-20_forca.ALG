Algoritmo "semnome"
//
//
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 20/09/2023
Var
   // Se��o de Declara��es das vari�veis
   i,nLetra,tentativas: inteiro
   letra, palavra, forca,chutes: caracter


Inicio
   // Se��o de Comandos, procedimento, fun��es, operadores, etc...
   tentativas<-5

   escreva("Informe a quantidade de letras: ")
   leia(nLetra)
   escreval("")

   //Informe as letras
   para i de 1 at� nLetra faca

      limpatela
      escreval("Informe a quantidade de letras: ",nLetra)
      escreval("")
      escreva("Informe a",i,"� letra: ")
      escreva(palavra)
      leia(letra)
      palavra <- palavra + letra

   fimpara
   escreval("")

   //Algoritimo que monta a forca
   para i de 1 at� nLetra faca

      escolha i
      caso 1
         forca<-forca+"_ "
      caso nLetra
         forca<-forca+"_"
      outrocaso
         forca<-forca+"_ "
      fimescolha

   fimpara

   limpatela
   
   //FORCA

   escreval(forca)
   escreval("")
   escreva("Informe uma letra: ")
   leia(letra)
   
   
   
   //ERROU
   se pos(letra,palavra)=0 entao
   
      tentativas <- tentativas - 1
      chute <- chute +" "+ letra
      
   fimse
   
   

   //escreva(compr("hello"))
   //escreva(pos("i","aeiou"))




Fimalgoritmo