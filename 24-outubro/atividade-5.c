/*
4. Elabore um algoritmo para receber dois inteiros como entrada do
teclado e escreva na tela:

A média, a soma, o produto, o menor valor e o maior valor.

Usando uma linha para cada resultado.
*/

#include <stdio.h> //header file library that lets us work with input and output functions, such as printf()
#include <stdlib.h> //utilidade geral
#include <locale.h> //biblioteca de lingua


int main(){
  
  setlocale(LC_ALL,"portuguese"); //utilizar codificacao em Windows 1252

  int numero[2]; //array
  float media;
  int soma=0;
  int maior;
  int menor;
  int i;

  for(i=0;i<2;i++){
    printf("Informe o %dº número: ",i + 1);
    scanf("%d",&numero[i]); //input de array
    soma+=numero[i];
  }
  
  media = soma/i;

  printf("\nNúmeros: %d, %d\n",numero[0],numero[1] );
  printf("Soma: %d\n",soma);
  printf("Média: %.1f\n",media);
  if (numero[1]>numero[0]){
    maior=numero[1];
    menor=numero[0];
  }else{
    maior=numero[0];
    menor=numero[1];
  }
  printf("Maior: %d",maior);
  printf("Menor: %d",menor);
  




  

  return 0;
  
}