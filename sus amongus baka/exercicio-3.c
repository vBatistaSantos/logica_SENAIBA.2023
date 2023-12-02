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
    printf("Informe a data de admiss�o: ");
    gets(funcionario[i].admissao);
    printf("Informe a matr�cula: ");
    gets(funcionario[i].matricula);
    printf("Informe o endere�o: ");
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
    printf("Informe o endere�o: ");
    gets(cliente[i].endereco);
    fflush(stdin);
  }
  system("clear || cls");

  printf("======= DADOS DO FUNCION�RIO =======\n\n");
  for(i=0;i<N_FUNCIONARIO;i++){
    printf("NOME: %s\n",funcionario[i].nome);
    printf("DATA DE ADMISS�O: %s\n",funcionario[i].admissao);
    printf("MATR�CULA: %s\n",funcionario[i].matricula);
    printf("ENDERE�O: %s\n\n",funcionario[i].endereco);
  }
  printf("\n========= REGISTRO DE CLIENTE =========\n\n");
  for(i=0;i<N_CLIENTE;i++){
    printf("NOME: %s\n",cliente[i].nome);
    printf("DATA DE NASCIMENTO: %s\n",cliente[i].nascimento);
    printf("ENDERE�O: %s\n\n",cliente[i].endereco);
  }
  return 0;

}