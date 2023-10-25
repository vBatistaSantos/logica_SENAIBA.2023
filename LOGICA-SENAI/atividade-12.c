/*
Elabore um algoritmo usando operações lógicas para informar se
uma pessoa é obrigada a votar.

Considere que a regra é que menores de 18 e maiores que 65 não são
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
    printf("\nVocê não é obrigado a votar\n");
  } else {
    printf("\nVocê é obrigado a votar!\n");
  }
  return 0;
}