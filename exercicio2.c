#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"portuguese");

    struct dados_usuario {
        char nome[200];
        int idade;
        char endereco[200];
    };

    struct dados_usuario usuario;

    printf("Informe o nome: ");
    gets(usuario.nome);
    
    printf("Informe a idade: ");
    scanf("%i",&usuario.idade);
    
    fflush(stdin);

    printf("Informe o endere�o: ");
    gets(usuario.endereco);

    system("clear || cls");

    printf("===NOMES DO USU�RIO===\n\n");
    printf("NOME    : %s\n",usuario.nome);
    printf("IDADE   : %i anos\n",usuario.idade);
    printf("ENDERE�O: %s\n",usuario.endereco);

    return 0;
}