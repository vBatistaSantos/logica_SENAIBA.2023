#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declarando váriaveis.

    int idade;
    float peso;
    char sexo;
    char nome;

    // Solicitando dados para o usuário.

    printf("Digite Sua idade: ");
    scanf("%d", &idade);

    printf("Digite seu peso: ");
    scanf("%f", &peso);

    fflush(stdin); // é preciso limpar o buffer do cash para executar uma variaves de caracter apos uma variavel de numeros.

    printf("Digite Seu Sexo: ");
    scanf("%c", &sexo);

    fgets(nome,3,stdin);
    nome[strcspn(nome,"\n")]=0;
    
    scanf("%s",&nome)


    // Exibindo dados do usuário

    system("cls || clear"); // Limpatela  => cls = para window / clear = para linux 

    printf("Idade : %d anos. \n", idade);
    printf("Peso : %.2f KG. \n", peso);
    printf("Sexo : %c \n", sexo);

    return 0;
}