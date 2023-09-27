#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(){
    
    char nome[1000];

    printf("Digite seu nome: ");
    fgets(nome,sizeof(nome),stdin);
    //nome[strcspn(nome,"\n")]=0;
    //gets(nome);

    printf("Nome: %s", nome);


    return 0;
}