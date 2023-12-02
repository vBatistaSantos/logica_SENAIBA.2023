#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

 struct info_funcionario{
    char nome[200],admissao[200],endereco[200],matricula[200];
  };
  
  struct info_cliente{
    char nome[200],nascimento[200],endereco[200];
  };

int main(){

  setlocale(LC_ALL,"portuguese");

  #define N_FUNCIONARIO 2
  #define N_CLIENTE 2

  struct info_funcionario funcionario[N_FUNCIONARIO];
  struct info_cliente cliente[N_CLIENTE];

  int i;

  printf("======= REGISTRO DE FUNCIONARIO =======\n\n");

  for(i=0;i<N_FUNCIONARIO;i++){
   
    printf("Informe o nome: ");
    gets(funcionario[i].nome);
    printf("Informe a data de admissão: ");
    gets(funcionario[i].admissao);
    printf("Informe a matrícula: ");
    gets(funcionario[i].matricula);
    printf("Informe o endereço: ");
    gets(funcionario[i].endereco);
    printf("\n");
    fflush(stdin);
  
  }
  printf("\n========= REGISTRO DE CLIENTE =========\n\n");
  for(i=0;i<N_CLIENTE;i++){
    printf("Informe o nome: ");
    gets(cliente[i].nome);
    printf("Informe a data de nascimento: ");
    gets(cliente[i].nascimento);
    printf("Informe o endereço: ");
    gets(cliente[i].endereco);
    fflush(stdin);
  }
  system("clear || cls");

  printf("======= DADOS DO FUNCIONÁRIO =======\n\n");
  for(i=0;i<N_FUNCIONARIO;i++){
    printf("NOME: %s\n",funcionario[i].nome);
    printf("DATA DE ADMISSÃO: %s\n",funcionario[i].admissao);
    printf("MATRÍCULA: %s\n",funcionario[i].matricula);
    printf("ENDEREÇO: %s\n\n",funcionario[i].endereco);
  }
  printf("\n========= REGISTRO DE CLIENTE =========\n\n");
  for(i=0;i<N_CLIENTE;i++){
    printf("NOME: %s\n",cliente[i].nome);
    printf("DATA DE NASCIMENTO: %s\n",cliente[i].nascimento);
    printf("ENDEREÇO: %s\n\n",cliente[i].endereco);
  }
  return 0;

}