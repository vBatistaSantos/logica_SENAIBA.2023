#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    int n;

    printf("Digite um numero: ");
    scanf("%d",&n);
    
    if (n>10)
    {
        printf("É MAIOR QUE 10");
    }
    else if (n == 10)
    {
        printf("O NÚMERO É 10");
    }
    
    else
    {
        printf("NÃO É MAIOR QUE 10");
    }
     
    return 0;
}