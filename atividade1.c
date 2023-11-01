/*
Escreva um algoritmo que leia as 5 notas de um aluno. Caso a nota informada seja menor que 0 ou maior que 10, mostre a pergunta novamente at√© que sejam informadas as 5 notas.

Ap√≥s calcular a m√©dia aritm√©tica, verifique se o aluno est√° aprovado ou reprovado, considerando que a m√©dia para aprova√ß√£o √© maior ou igual a 7. Caso a m√©dia seja menor que 7, o aluno est√° reprovado.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){

  setlocale(LC_ALL,"portuguese");

  int i,a;
  float nota[5], media=0;
  char espaco[10];

  for(i=0;i<5;i++){
    system("clear || cls");
    printf("---CADASTRO DE NOTAS---\n\n");

    for(a=0;a<=i-1;a++){
      printf("%d™ nota: %.1f\n",a+1,nota[a]);
    }

    printf("Informe a %d™ nota: ",i+1);
    scanf("%f",&nota[i]);
    
    while (nota[i]<0 || nota[i]>10)
    {
      printf("\nPor favor, informe uma nota v·lida: ");
      scanf("%f",&nota[i]);
    }
    
    media+=nota[i];
    
  }
  media/=i+1;

  system("clear || cls");

  printf("---BOLETIM---\n");
  for(i=0;i<5;i++){
    printf("\nn caracteres: %d",strlen());
    printf("\nNOTA %d: %.1f",i+1,nota[i]);
  }
  printf("\n\nM…DIA: %.1f\n",media);
  media<7?printf("VocÍ foi reprovado."):printf("ParabÈns, vocÍ foi aprovado!");

  return 0;
}