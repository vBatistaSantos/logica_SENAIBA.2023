Algoritmo "semnome"
//
//
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 20/09/2023
Var
   // Seção de Declarações das variáveis
   i,nLetra,tentativas: inteiro
   letra, palavra, forca,chutes: caracter


Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   tentativas<-5

   escreva("Informe a quantidade de letras: ")
   leia(nLetra)
   escreval("")

   //Informe as letras
   para i de 1 até nLetra faca

      limpatela
      escreval("Informe a quantidade de letras: ",nLetra)
      escreval("")
      escreva("Informe a",i,"º letra: ")
      escreva(palavra)
      leia(letra)
      palavra <- palavra + letra

   fimpara
   escreval("")

   //Algoritimo que monta a forca
   para i de 1 até nLetra faca

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