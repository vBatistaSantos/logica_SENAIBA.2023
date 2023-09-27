#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade = 20;    // inteiro
    float peso = 80.2; // real
    char sexo = 'F'; // apenas 1
    char nome [200] = "Marta"; // cadeia de caracteres

    printf("Idade: %d Anos \n", idade); // d = decimal utilizado em numero inteiros
    printf("Peso: %.2f kg \n", peso); // dititar o ponto antes do numero 2 indica quantas casas eu quero mostrar do meu número
    printf("Sexo: %c \n", sexo); // usado para uma letra, ou seja um caracter
    printf("Nome: %s \n", nome); // usado para Nomes

    return 0;
}
