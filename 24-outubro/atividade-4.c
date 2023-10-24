/*
2. Elabore um algoritmo para ler um valor e escrever a mensagem:
“É MAIOR QUE 10!”.

Se o valor lido for maior que 10, caso contrário escrever “NÃO É
MAIOR QUE 10!”

Verifique se o número digitado é igual a 10, caso seja, escreva a
mensagem: “O número é igual a 10!”
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