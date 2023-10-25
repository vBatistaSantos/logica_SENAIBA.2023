/*
Elabore um algoritmo usando operações lógicas para ler 3 números
e escrever:

• Os 3 números informados.
• O maior número;
• O menor número;
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
    printf("Informe o %dº número: ",i+1);
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
    printf("\n%dº número: %d",i+1,n[i]);
  }
  printf("\nMaior: %d",maior);
  printf("\nMenor: %d",menor);

  return 0;
}