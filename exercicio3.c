#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"portuguese");

    #define TAMANHO 20

    struct dados_usuario{
        char nome[200];
        int idade;
        char endereco[200];
    };
    int i;
    int tmn = 0;
    struct dados_usuario usuario[TAMANHO];

    char continuar;


    do{
        printf("===== REGISTRO DE USUÁRIOS =====\n\n");

        printf("Informe o nome: ");
        gets(usuario[tmn].nome);
        
        printf("Informe a idade: ");
        scanf("%i",&usuario[tmn].idade);
        
        fflush(stdin);

        printf("Informe o endereço: ");
        gets(usuario[tmn].endereco);

        tmn++;
        printf("\n");

        do{ 
            fflush(stdin);
            printf("Deseja realizar mais cadastros?(s/n)");
            scanf("%c",&continuar);
        }while(continuar!='s'&&continuar!='n');
        system("clear || cls");

    }while(continuar=='s');


    printf("===== USUÁRIOS CADASTRADOS =====\n\n");
    for(i=0;i<tmn+1;i++){
        printf("NOME    : %s\n",usuario[i].nome);
        printf("IDADE   : %i anos\n",usuario[i].idade);
        printf("ENDEREÇO: %s\n",usuario[i].endereco);
    }

    return 0;
}