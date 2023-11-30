#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"portuguese");

    struct dados_usuario {
        char nome[200];
        int idade;
        float peso;
        float altura;
    };

    struct dados_usuario usuario;

    printf("Informe o nome:");
    gets(usuario.nome);
    
    printf("Informe a idade:");
    scanf("%i",&usuario.idade);
    
    printf("Informe o peso:");
    scanf("%f",&usuario.peso);

    printf("Informe a altura:");
    scanf("%f",&usuario.altura);
    
    system("clear || cls");

    printf("===NOMES DO USUÁRIO===\n\n");
    printf("NOME  : %s\n",usuario.nome);
    printf("IDADE : %i anos\n",usuario.idade);
    printf("PESO  : %.2f kg\n",usuario.peso);
    printf("ALTURA: %.2f m\n",usuario.altura);

    return 0;
}