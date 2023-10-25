/*
4. Elabore um algoritmo para receber dois inteiros como entrada do
teclado e escreva na tela:

A mùdia, a soma, o produto, o menor valor e o maior valor.

Usando uma linha para cada resultado.
*/

#include <stdio.h> //header file library that lets us work with input and output functions, such as printf()
#include <stdlib.h> //utilidade geral
#include <locale.h> //biblioteca de lingua


int main(){
  
  setlocale(LC_ALL,"portuguese"); //utilizar codificacao em Windows 1252

  int numero[2]; //array
  float media=0;
  float soma=0;
  int produto;
  int i;


  for(i=0;i<2;i++){
    printf("Informe o %d™ n˙mero: ",i + 1);
    scanf("%d",&numero[i]); //input de array
    soma+=numero[i];
  }
  
  fflush(stdin);

  produto = numero[0] * numero[1];
  media = soma/i;

  printf("\nN˙meros: %d, %d\n",numero[0],numero[1] );
  printf("Soma: %.f\n",soma);
  printf("Produto: %d\n",produto);
  printf("MÈdia: %.1f\n",media);
  if(numero[1]>numero[0]){
    printf("Maior: %d\n",numero[1]);
    printf("Menor: %d\n",numero[0]);
  }else if(numero[0]>numero[1]){
    printf("Maior: %d\n",numero[0]);
    printf("Menor: %d\n",numero[1]);
  }else{
    printf("Os n˙meros s„o iguais.");
  }
  
  return 0;
}