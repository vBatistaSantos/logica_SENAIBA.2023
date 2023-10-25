/*
3. Elabore um algoritmo para ler o nome de um aluno, sua idade (em
anos) e as três notas. Calcular a média anual do aluno.

Caso a média do aluno seja menor que 7, o aluno está reprovado.

Mostrar: nome, idade, média e se está aprovado ou reprovado.
*/

#include <stdio.h> //header file library that lets us work with input and output functions, such as printf()
#include <stdlib.h> //utilidade geral
#include <locale.h> //biblioteca de lingua


int main(){
  
  setlocale(LC_ALL,"portuguese"); //utilizar codificacao em Windows 1252

  char nome[30];
  int idade;
  float nota;
  float media=0;
  int i;

  printf("Informe seu nome: ");
  scanf("%s",&nome[30]);

  printf("Informe sua idade: ");
  scanf("%d",&idade);

  for(i=1;i<4;i ++){
    printf("Informe sua %dª nota: ",i);
    scanf("%f",&nota);

    media+=nota/3;
  }

  fflush(stdin);

  printf("\nNome : %s\n", nome);
  printf("Idade: %d anos\n", idade);
  printf("Media: %.2f\n", media);
  
  if (nota<7){
    printf("\nVocê foi reprovado\n");
  } else {
    printf("\nVocê foi aprovado!\n");
  }

  return 0;
  
}