/*
Elabore um algoritmo usando opera��es l�gicas para ler 3 n�meros
e escrever:

� Os 3 n�meros informados.
� O maior n�mero;
� O menor n�mero;
*/

#include <stdio.h> //header file library that lets us work with input and output functions, such as printf()
#include <stdlib.h> //utilidade geral
#include <locale.h> //biblioteca de lingua
#include <stdbool.h>
#include <string.h>


int main(){
  
  setlocale(LC_ALL,"portuguese"); //utilizar codificacao em Windows 1252

  int n[3]={0,0,0};
  int maior, menor, i;

  for (i=0;i<3;i++){
    printf("Informe o %d� n�mero: ",i+1);
    scanf("%d",&n[i]);
    
    if(i==0){
      maior=n[i];
      menor=n[i];
    }else{
      if (maior<n[i]){
        maior=n[i];
      } else {
        menor=n[i];
      }
    }
  }

  for (i=0;i<3;i++){
    printf("\n%d� n�mero: %d",i+1,n[i]);
  }
  printf("\nMaior: %d",maior);
  printf("\nMenor: %d",menor);

  return 0;
}