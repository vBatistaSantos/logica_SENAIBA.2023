#include <stdio.h>
#include <stdlib.h>

int main() {
    int idade = 20;
    float peso = 80.2;
    char sexo = 'F';
    char nome [200] ="Marta";

    printf("Idade: %d anos. \n", idade);
    printf("Peso: %.2f kg. \n", peso);
    printf("Sexo: %c . \n", sexo);
    printf("Nome: %s \n", nome);

    return 0;
}