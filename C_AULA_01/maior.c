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
        printf("� MAIOR QUE 10");
    }
    else if (n == 10)
    {
        printf("O N�MERO � 10");
    }
    
    else
    {
        printf("N�O � MAIOR QUE 10");
    }
     
    return 0;
}