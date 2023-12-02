#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){

  setlocale(LC_ALL,"portuguese");

  #define N_NOTAS 2
  #define N_ALUNOS 3

  struct info_funcionario{
    char nome[200],cpf[200];
    int idade;
  }funcionario,cliente;

  printf("======= REGISTRO DE FUNCIONARIO =======\n\n");

  printf("Informe o nome: ");
  gets(funcionario.nome);
  printf("Informe o CPF: ");
  gets(funcionario.cpf);
  printf("Informe idade: ");
  scanf("%d",&funcionario.idade);
  
  fflush(stdin);

  printf("\n========= REGISTRO DE CLIENTE =========\n\n");

  printf("Informe o nome: ");
  gets(cliente.nome);
  printf("Informe o CPF: ");
  gets(cliente.cpf);
  printf("Informe idade: ");
  scanf("%d",&cliente.idade);

  system("clear || cls");

  printf("======= DADOS DO FUNCIONÁRIO =======\n\n");

  printf("NOME : %s\n",funcionario.nome);
  printf("IDADE: %i\n",funcionario.idade);
  printf("CPF  : %s\n\n",funcionario.cpf);

  printf("========= REGISTRO DE CLIENTE =========\n\n");

  printf("NOME : %s\n",cliente.nome);
  printf("IDADE: %i\n",cliente.idade);
  printf("CPF  : %s\n\n",cliente.cpf);

  return 0;

}