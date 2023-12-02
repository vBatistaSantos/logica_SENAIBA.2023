#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define N_DISCIPLINAS 2
#define N_NOTAS 2
#define N_TURMAS 2


struct info_aluno{
  char nome[200];
  int turma, idade;
  float notas[N_NOTAS],media;
};

struct info_professor{
  char nome[200],disciplina[N_DISCIPLINAS][200];
  int turma[N_TURMAS];  
};

int main(){

  setlocale(LC_ALL,"portuguese");

  #define N_PROFESSOR 2
  #define N_ALUNO 3

  struct info_professor professor[N_PROFESSOR];
  struct info_aluno aluno[N_ALUNO];

  int i,j;

  printf("======= REGISTRO DE ALUNO =======\n\n");

  for(i=0;i<N_ALUNO;i++){
   
    printf("NÚMERO DA TURMA: ");
    scanf("%i",&aluno[i].turma);
    fflush(stdin);
    printf("NOME: ");
    gets(aluno[i].nome);
    printf("IDADE: ");
    scanf("%i",&aluno[i].idade);
    fflush(stdin);
    aluno[i].media=0;
    for(j=0;j<N_NOTAS;j++){
      printf("NOTA(%i): ",j+1);
      scanf("%f",&aluno[i].notas[j]);
      aluno[i].media+=aluno[i].notas[j]/(float)N_NOTAS;
    }
    printf("\n");
    fflush(stdin);
  
  }
  printf("\n========= REGISTRO DE PROFESSOR =========\n\n");
  for(i=0;i<N_PROFESSOR;i++){
    printf("NOME: ");
    gets(professor[i].nome);
    for(j=0;j<N_DISCIPLINAS;j++){
      printf("TURMA(%i): ",j+1);
      scanf("%i",&professor[i].turma[j]);
      fflush(stdin);
      printf("DISCIPLINA(%i): ",j+1);
      gets(professor[i].disciplina[j]);
    }
    fflush(stdin);
    printf("\n");
  }
  system("clear || cls");

  printf("======= DADOS DO ALUNO =======\n\n");
  for(i=0;i<N_ALUNO;i++){
    printf("NÚMERO DA TURMA: %i\n",aluno[i].turma);
    printf("NOME: %s\n",aluno[i].nome);
    printf("IDADE: %i\n",aluno[i].idade);
    for(j=0;j<N_NOTAS;j++){
      printf("NOTA(%i): %.2f\n",j+1,aluno[i].notas[j]);
    }
    printf("MÉDIA: %.2f\n",aluno[i].media);
    printf("SITUAÇÃO: ");

    aluno[i].media>=7?printf("APROVADO"):printf("REPROVADO");
    printf("\n\n");
  }

  printf("\n========= DADOS DO PROFESSOR =========\n\n");
  for(i=0;i<N_PROFESSOR;i++){
    printf("NOME: %s\n",professor[i].nome);
    for(j=0;j<N_DISCIPLINAS;j++){
      printf("TURMA(%i): %i\n",j+1,professor[i].turma[j]);
      printf("DISCIPLINA(%i): %s\n",j+1,professor[i].disciplina[j]);
    }
    printf("\n");
  }
  return 0;

}