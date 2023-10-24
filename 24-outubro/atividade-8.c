/*
8. Escreva um algoritmo que leia três notas de um aluno.
Caso seja menor que 0 ou maior que 10, mostre a pergunta
novamente.

Após receber as notas dentro dos parâmetros acima, calcule a média e
verifique se o aluno está aprovado, recuperação ou reprovado
considerando os seguintes critérios:

Se a média for a partir de 7, aprovado;
Se a média for entre 5 e 6,9, o aluno está em recuperação;
Caso seja menor que 5, o aluno está reprovado.
*/

#include <stdio.h> //header file library that lets us work with input and output functions, such as printf()
#include <stdlib.h> //utilidade geral
//#include <string.h> //biblioteca de string
#include <locale.h> //biblioteca de lingua
#include <ctype.h> //maiusculo minusculo


int main(){
  
  setlocale(LC_ALL,"portuguese"); //utilizar codificacao em Windows 1252

  float nota[100];
  float media;
  char continuar;
  int i=0;

  do{
    printf("\nInforme sua %dª nota: ",i+1);
    scanf("%f", &nota[i]);
    
    while (nota[i]<0||nota[i]>10) {
      printf("Por favor, informe uma nota válida: ");
      scanf("%f",&nota[i]);
    }
    media += nota[i];
    i++;

    fflush(stdin);
    
    printf("Deseja continuar?");
    scanf("%c",&continuar);
    continuar=toupper(continuar);

  } while(continuar!='N'); //ASPAS SIMPLES PARA TRABALHAR COM UM CARACTERE
  //} while(strcmp("N",continuar)); <<< COM A BIBLIOTECA STRING.H

  media = media/i;

  fflush(stdin);
  system("clear || cls");
  
  printf("\nMédia: %.1f\n",media);

  if (media>=7){
    printf("\nParabéms, você foi aprovado!\n");
  }else if(media<7 && media>=5){
    printf("\nVocê está de recuperação, boa sorte!\n");
  }else{
    printf("\nVocê está reprovado.\n");
  }

  return 0;
  
}