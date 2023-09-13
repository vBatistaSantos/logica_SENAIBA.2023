Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 13/09/2023
Var
   // Seção de Declarações das variáveis
   operacao,continuar:caracter
   resultado, n1,n2:real


Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   continuar <- "y"
   enquanto continuar="y" faca
      limpatela
      
      escreval("Informe dois números:")
      leia(n1)
      escreva("")
      leia(n2)
      escreval("")

      escreval("Informe a operação")
      escreval("(+) - Adição")
      escreval("(-) - Subtração")
      escreval("(*) - Multiplicação")
      escreval("(/) - Divisão")
      leia(operacao)
      escreval("")


      enquanto (operacao <> "+") e (operacao <> "-") e (operacao <> "*") e (operacao <> "/") faca

         escreval("Por favor, insira um do simbolos abaixo:")
         escreval("")
         escreval("(+) - Adição")
         escreval("(-) - Subtração")
         escreval("(*) - Multiplicação")
         escreval("(/) - Divisão")
         leia(operacao)
         escreval("")

      fimenquanto

      escolha operacao
      caso "+"
         resultado <- n1 + n2
      caso "-"
         resultado <- n1 - n2
      caso "*"
         resultado <- n1 * n2
      outrocaso
         resultado <- n1/n2
      fimescolha

      escreval(n1," ",operacao," ",n2," = ",resultado)
      escreval("")
      escreval("Deseja realizar outra operação? y/n")
      leia(continuar)
      escreval("")

      enquanto (continuar<>"y") e (continuar<>"n") faca

         escreval("Por favor, digite (y) para sim ou (n) para não:")
         leia(continuar)
         escreval("")

      fimenquanto

      se continuar="n" entao
         escreval("Encerrando")
      fimse

   fimenquanto










Fimalgoritmo