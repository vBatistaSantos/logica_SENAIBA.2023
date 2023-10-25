/*
Elabore um algoritmo usando opera��es l�gicas para informar se
uma pessoa � obrigada a votar.

Considere que a regra � que menores de 18 e maiores que 65 n�o s�o
obrigados a votar.
*/

#include <stdio.h> //header file library that lets us work with input and output functions, such as printf()
#include <stdlib.h> //utilidade geral
#include <locale.h> //biblioteca de lingua
#include <stdbool.h>
#include <string.h>


int main(){
  
  setlocale(LC_ALL,"portuguese"); //utilizar codificacao em Windows 1252

  int idade;

  printf("Informe sua idade: ");
  scanf("%d",&idade);
  
  if (idade>65 || idade<18){
    printf("\nVoc� n�o � obrigado a votar\n");
  } else {
    printf("\nVoc� � obrigado a votar!\n");
  }
  return 0;
}