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

  int numero=0;
  float media=0;
  int i=0;

  while(numero>=0){
    
    media += numero;
    i++;

    printf("\nInforme um número: ");
    scanf("%d", &numero);

  } 

  printf("soma = %f \n",media);

  media = media/(i-1);
  

  fflush(stdin);
  //system("clear || cls");
  
  printf("%d",i);
  printf("\nMédia: %.1f\n",media);

  return 0;
  
}