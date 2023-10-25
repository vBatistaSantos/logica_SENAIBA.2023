/*
a media de salario do grupo
maior e menor idade
quantidade de mulieres com salario acima de 5000
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main(){

    setlocale(LC_ALL,"portuguese");

    char menu[]="CÓDIGO |        DESCRIÇÃO         \n   1   |     Adcionar pessoa     \n   2   | Sair e exibir resultados\n";
    char sexo,continuar;
    int idade, cod, maiorIdade,menorIdade,contF, contSalario;
    float salario, totalSalario, mediaSalario;

    do{
        printf("%s",menu);
        scanf("%d",cod);
        sytem("clear || cls"); //LIMPA TELA

        switch (cod)
        {
        case 1:

            do{
                //----------------------SEXO------------------------
                printf("------ ADICIONAR PESSOA ---------");
                printf("Informe o sexo(m/f): ");
                scanf("%c",&sexo);
                sexo = toupper(sexo);

                while (sexo!="M" && sexo!="F")
                {
                    printf("\nPor favor, insira uma das opções (m/f): ");
                    scanf("%c",&sexo);
                }
                
                //----------------------IDADE--------------------------
                printf("\nInforme a idade: ");
                scanf("%d",idade);

                if (idade>maiorIdade){
                    maiorIdade=idade;
                }
                
                if (idade<menorIdade){
                    menorIdade=idade;
                }

                //----------------------SALARIO----------------------
                printf("\nInforme o salário: ");
                scanf("%f",salario);

                contSalario ++;
                totalSalario+=salario;

                if(sexo=="F" && salario>5000){contF++;} //contador de mulieres que ganham mais de 5k

                //=====================CONTINUAR======================
                printf("Deseja adcionar mais uma pessoa (s/n)?");
                scanf("%c",continuar);
                continuar = toupper(continuar);

            } while(continuar=='S');
            break;
        default:
            
            mediaSalario = totalSalario/contSalario;

            printf("--------EXIBIR------------\n");
            printf("Média de salário: R$%.2f\n",mediaSalario);
            printf("Maior Idade     :\n",maiorIdade);
            printf("Menor Idade     :\n",menorIdade);
            printf("Número de mulheres com salário acima de R$ 5.000,00\n");            

            break;
        }
    }while(cod=1);
    
    

    

    return 0;

}