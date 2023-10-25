/*
10. Construa um algoritmo que calcule a média aritmética
de vários valores inteiros positivos, inseridos pelo usuário.

O final da leitura acontecerá quando for lido um valor
negativo.

Mostre a média aritmética dos números informados pelo
usuário.
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