#include <stdio.h>
#include <ctype.h>

int main() {

   int var1 = 'd';
   int var2 = 'D';
   int var3 = '2';
   int var4 = '\t';
   int var5 = ' ';
   int var6 = '.';
    
   if(ispunct(var1))
      printf("var1 = |%c| é caracter de pontuação\n", var1);
   else
      printf("var1 = |%c| não é caracter de pontuação\n", var1);
   
   if(ispunct(var2))
      printf("var2 = |%c| é caracter de pontuação\n", var2);
   else
      printf("var2 = |%c| não é caracter de pontuação\n", var2);
   
   if(ispunct(var3)) 
      printf("var3 = |%c| é caracter de pontuação\n", var3);
   else
      printf("var3 = |%c| não é caracter de pontuação\n", var3);
   
   if(ispunct(var4))
      printf("var4 = |%c| ou tab é caracter de pontuação\n", var4);
   else
      printf("var4 = |%c| ou tab não é caracter de pontuação\n", var4);

   if(ispunct(var5))
      printf("var5 = |%c| é caracter de pontuação\n", var5);
   else
      printf("var5 = |%c| não é caracter de pontuação\n", var5);

   if(ispunct(var6))
      printf("var6 = |%c| é caracter de pontuação\n", var6);
   else
      printf("var6 = |%c| não é caracter de pontuação\n", var6);

   return(0);
}

/* 

DESCRIÇÃO:

   - A função int ispunct(int c) verifica se o caracter passado é um caracter de pontuação.

   - caracter de pontuação:

      ! " # $ % & ' ( ) * + , - . / : ; < = > ? @ [ \ ] ^ _ ` { | } ~

DECLARAÇÃO:

   int ispunct(int c);

PARÂMETROS:

    c − Caractere que será analisado.

RETORNO:

   - A função retorna um caracter de pontuação diferente de zero se "c" for um caracter de pontuação

   - A função retorna 0 caso contrario.

*/