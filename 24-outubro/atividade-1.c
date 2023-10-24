/*1. Elabore um algoritmo para ler um valor e escrever a mensagem:
É MAIOR QUE 10! se o valor lido for maior que 10, caso contrário
escrever “NÃO É MAIOR QUE 10!*/

#include <stdio.h> //header file library that lets us work with input and output functions, such as printf()
#include <stdlib.h> //utilidade geral
#include <locale.h> //biblioteca de lingua

int main(){
  
  setlocale(LC_ALL,"portuguese"); //seta a linguagem para padrao do sistema operacional

  int numero; //váriavel inteiro

  printf("Digite um número: ");
  scanf("%d",&numero); 

  fflush(stdin);

  if (numero>10){
    printf("Numero e maior que 10");
  } else {
    printf("Numero e menor que 10");
  }

  return 0;

}