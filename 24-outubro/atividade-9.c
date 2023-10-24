/*
8. Escreva um algoritmo que leia tr�s notas de um aluno.
Caso seja menor que 0 ou maior que 10, mostre a pergunta
novamente.

Ap�s receber as notas dentro dos par�metros acima, calcule a m�dia e
verifique se o aluno est� aprovado, recupera��o ou reprovado
considerando os seguintes crit�rios:

Se a m�dia for a partir de 7, aprovado;
Se a m�dia for entre 5 e 6,9, o aluno est� em recupera��o;
Caso seja menor que 5, o aluno est� reprovado.
*/

#include <stdio.h> //header file library that lets us work with input and output functions, such as printf()
#include <stdlib.h> //utilidade geral
//#include <string.h> //biblioteca de string
#include <locale.h> //biblioteca de lingua
#include <ctype.h> //maiusculo minusculo


int main(){
  
  setlocale(LC_ALL,"portuguese"); //utilizar codificacao em Windows 1252

  int numero=0;
  float media=0;
  int i=0;

  while(numero>=0){
    
    media += numero;
    i++;

    printf("\nInforme um n�mero: ");
    scanf("%d", &numero);

  } 

  printf("soma = %f \n",media);

  media = media/(i-1);
  

  fflush(stdin);
  //system("clear || cls");
  
  printf("%d",i);
  printf("\nM�dia: %.1f\n",media);

  return 0;
  
}