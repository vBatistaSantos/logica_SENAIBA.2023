#include <stdio.h>
#include <stdlib.h>

int main() {
int idade;
float peso;
char sexo;

printf("Digite sua idade: ");
scanf("%d", &idade);

printf("Digite seu peso: ");
scanf("%f", &peso);

printf("Digite seu sexo: ");
scanf("%s", &sexo);

fflush stdin;

system("cls || clear");

printf("Idade: %d anos. \n", idade);
printf("Peso: %.2f kg. \n", peso);
printf("Sexo: %c \n", sexo);

return 0;
}