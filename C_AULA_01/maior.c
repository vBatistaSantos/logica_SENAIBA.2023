#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    int n;

    printf("Digite um numero: \n");
    scanf("%d",&n);
    
    if (n>10)
    {
        printf("� MAIOR QUE 10");
    }
    else
    {
        printf("%d N�O � MAIOR QUE 10", n);
    }
     
    return 0;
}