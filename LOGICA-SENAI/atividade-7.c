/*
7. Escreva um algoritmo que leia a nota de um aluno.
Caso seja menor que 0 ou maior que 10, mostre a pergunta novamente.

Mostre a nota informada pelo usuário.
*/

#include <stdio.h> //header file library that lets us work with input and output functions, such as printf()
#include <stdlib.h> //utilidade geral
#include <locale.h> //biblioteca de lingua


int main(){
  
  setlocale(LC_ALL,"portuguese"); //utilizar codificacao em Windows 1252

  float nota;
  float media;
  int i;

  for (i=1;i<3;i ++){
    printf("Informe sua %dª nota: ",i);
    scanf("%f", &nota);
    
    while (nota<0||nota>10) {
      printf("Por favor, informe uma nota válida: ");
      scanf("%f",&nota);
    }
    media += nota/2;
  }

  fflush(stdin);

  printf("\nSua média: %.2f!",media);

  return 0;
  
}