#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"portuguese");

    #define TAMANHO 20
    #define N_NOTAS 2

    struct info_aluno{
        char nome[200];
        int idade;
        float nota[2];
    }aluno[TAMANHO];
    
    //struct info_aluno aluno[TAMANHO];
    char continuar;
    int n=0,i,j;

    do{

        printf("===== REGISTRO DE ALUNOS =====\n");
        printf("%03i alunos cadastrados\n\n",n);
        printf("INFORME O NOME: ");
        gets(aluno[n].nome);

        printf("INFORME A IDADE: ");
        scanf("%i",&aluno[n].idade);

        for(i=0;i<N_NOTAS;i++){
            printf("INFORME A %iª NOTA: ",i+1);
            scanf("%f",&aluno[n].nota[i]);
        }
        n++;

        fflush(stdin);
        printf("\n");
        do{
            printf("DESEJA CADASTRAR MAIS ALUNOS?(s/n)");
            scanf("%c",&continuar);
            continuar = tolower(continuar);
            fflush(stdin);
        }while(continuar!='s'&&continuar!='n');

        system("cls || clear");

    }while(continuar=='s');

    printf("===== ALUNOS CADASTRADOS =====\n\n");
    
    for(i=0;i<n;i++){
        printf("NOME : %s\n",aluno[i].nome);
        printf("IDADE: %i anos\n",aluno[i].idade);
        for(j=0;j<N_NOTAS;j++){
            printf("%03iª NOTA: %.2f\n",j+1,aluno[i].nota[j]);
        }
        printf("\n");
    }
    return 0;
}