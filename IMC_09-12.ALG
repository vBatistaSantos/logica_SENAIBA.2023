Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 12/09/2023
Var
   // Seção de Declarações das variáveis
   imc, peso, altura: real
   classificacao:caracter
   invalido: logico

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...

   escreva("Informe sua altura: ")
   leia(altura)
   escreva("Informe seu peso: ")
   leia(peso)
   escreval("")

   imc <-(peso/(altura*altura))

   se imc>=40 entao
        classificacao <- "Obesidade grau III (mórbida)"
   senao

      se imc >=35 entao
      classificacao <- "Obesidade grau II (severa)"
      senao
         se imc >=30 entao
         classificacao <-"Obesidade grau I"
         senao
            se imc >=25 entao
            classificacao <-"Levemente acima do peso"
            senao
               se imc >=18.6 entao
               classificacao <- "Peso ideal (parabéns)"
               senao
               classificacao <-"Abaixo do peso"
               fimse
            fimse
         fimse
      fimse
   fimse

   limpatela

   escreval("Altura: ", altura:3:2," m")
   escreval("Peso: ",peso:3:2, "kg")
   escreval("IMC: ",imc:3:2,", ",classificacao)

   //homem (72.7 *h) - 58
   //mulher (62.1 * h) - 44.7







Fimalgoritmo