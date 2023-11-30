#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    int i;
    struct info_teste{
        int i;
    };

    struct info_teste teste[3];

    for(i=0;i<3;i++){
        teste[i].i=i;
        printf("%i\n",teste[i].i);
    }

    return 0;
}