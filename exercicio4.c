#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"portuguese");

    #define TAMANHO 20

    struct info_livro{
        char nome[200],autor[200],categoria[200];
        float preco;
    };
    struct info_livro livro[TAMANHO];
    char continuar;
    int n=0,i;

    do{

        printf("===== REGISTRO DE LIVROS =====\n");
        printf("%03i livros cadastrados\n\n",n);
        printf("INFORME O NOME: ");
        gets(livro[n].nome);

        printf("INFORME O AUTOR: ");
        gets(livro[n].autor);

        printf("INFORME A CATEGORIA: ");
        gets(livro[n].categoria);

        printf("INFORME O PREÇO: ");
        scanf("%f",&livro[n].preco);
        
        n++;

        fflush(stdin);
        printf("\n");
        do{
            printf("Deseja inserir mais um livro?(s/n)");
            scanf("%c",&continuar);
            fflush(stdin);
        }while(continuar!='s'&&continuar!='n');

        system("cls || clear");

    }while(continuar=='s');

    printf("===== LIVROS CADASTRADOS =====\n\n");
    
    for(i=0;i<n;i++){
        printf("%04i %s\n",i,livro[i].nome);
        printf("     %s\n",livro[i].autor);
        printf("     %s\n",livro[i].categoria);
        printf("     R$ %.2f\n\n",livro[i].preco);
    }



    return 0;
}