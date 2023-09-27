#include <stdio.h>
#include <stdlib.h>

//MÉDIA


int main(){
    float media;
    float n1;
    float n2;
    
    //SOLICITAR DADOS AO USUÁRIO
    printf("Informe sua primeira nota: ");
    scanf("%f",&n1);

    printf("Informe sua segunda nota: ");
    scanf("%f",&n2);

    //CALCULO
    media = (n1+n2)/2;

    system("cls || clear"); // Limpatela  => cls = para window / clear = para linux 

    printf("Nota 1: %.2f \n",n1);
    printf("Nota 2: %.2f \n",n2);
    printf("Media:  %.2f",media);

    return 0;
}