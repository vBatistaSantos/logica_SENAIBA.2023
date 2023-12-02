#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){

  setlocale(LC_ALL,"portuguese");

  #define N_NOTAS 2
  #define N_ALUNOS 3

  struct info_aluno{
    char nome[200];
    int idade;
    float notas[N_NOTAS];
    float media;
  }aluno[N_ALUNOS];

  int i,j;

  printf("======= REGISTRO DE ALUNOS =======\n\n");

  for(i=0;i<N_ALUNOS;i++){
    printf("Informe o nome: ");
    gets(aluno[i].nome);
    printf("Informe idade: ");
    scanf("%d",&aluno[i].idade);
    aluno[i].media=0;
    
    for(j=0;j<N_NOTAS;j++){
      printf("Informe a %iª nota: ",j+1);
      scanf("%f",&aluno[i].notas[j]);
      aluno[i].media+=aluno[i].notas[j];
    }
    printf("\n");
    fflush(stdin);
  }

  system("clear || cls");

printf("======= EXIBINDO DADOS =======\n\n");

  for(i=0;i<N_ALUNOS;i++){
    printf("NOME : %s\n",aluno[i].nome);
    printf("IDADE: %i\n",aluno[i].idade);
    for(j=0;j<N_NOTAS;j++){
      printf("NOTA(%i): %.2f\n",j+1,aluno[i].notas[j]);
    }
    printf("MEDIA: %.2f\n\n",aluno[i].media);
  }

  return 0;

}