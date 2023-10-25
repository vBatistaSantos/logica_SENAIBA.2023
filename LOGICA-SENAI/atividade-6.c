/*
Elabore um algoritmo para receber o login e senha de um usu�rio.

Caso o usu�rio e senha estejam corretos, mostre a mensagem
�Bem-vindo!�, caso contr�rio, mostre a mensagem �Login ou senha
inv�lidos.�
*/

#include <stdio.h> //header file library that lets us work with input and output functions, such as printf()
#include <stdlib.h> //utilidade geral
#include <locale.h> //biblioteca de lingua
#include <stdbool.h>
#include <string.h>


int main(){
  
  setlocale(LC_ALL,"portuguese"); //utilizar codificacao em Windows 1252

  char registroUsuario[30], registroSenha[30],loginUsuario[30],loginSenha[30]; //array
  bool login;
  char i;
  

  printf("-----REGISTRO------\n");
  printf("Registre um usu�rio:\n");
  scanf("%s",&registroUsuario);
  printf("Registre uma senha:\n");
  scanf("%s",&registroSenha);

  do {
    system("clear || cls");
   
    fflush(stdin);

    printf("----------LOGIN-----------\n");
    printf("Usu�rio:\n");
    scanf("%s",&loginUsuario);
    printf("Senha:\n");
    scanf("%s",&loginSenha);

    fflush(stdin);

    //if (strcmp(loginUsuario,registroUsuario) && strcmp(loginSenha,registroSenha)){
    if ((loginUsuario==registroUsuario) && (loginSenha==registroSenha)){
      printf("Bem-vindo!");
      login=true;
    } else {
      printf("%s == %s\n",loginUsuario,registroUsuario);
      printf("%s == %s\n\n",loginSenha,registroSenha);
      printf("Login e/ou senha incorretos, aperte ENTER para tentar novamente");
      scanf("%c",&i);
      login=false;
    }
    
  } while(!login);

  return 0;
}