#include <stdio.h>
#include <ctype.h>

int main() {

   int var1 = 'd';
   int var2 = 'D';
   int var3 = '2';
   int var4 = '\t';
   int var5 = ' ';
   int var6 = '.';
    
   if(isalpha(var1))
      printf("var1 = |%c| é letra do alfabeto\n", var1);
   else
      printf("var1 = |%c| não é letra do alfabeto\n", var1);
   
   if(isalpha(var2))
      printf("var2 = |%c| é letra do alfabeto\n", var2);
   else
      printf("var2 = |%c| não é letra do alfabeto\n", var2);
   
   if(isalpha(var3)) 
      printf("var3 = |%c| é letra do alfabeto\n", var3);
   else
      printf("var3 = |%c| não é letra do alfabeto\n", var3);
   
   if(isalpha(var4))
      printf("var4 = |%c| ou tab é letra do alfabeto\n", var4);
   else
      printf("var4 = |%c| ou tab não é letra do alfabeto\n", var4);

   if(isalpha(var5))
      printf("var5 = |%c| é letra do alfabeto\n", var5);
   else
      printf("var5 = |%c| não é letra do alfabeto\n", var5);

   if(isalpha(var6))
      printf("var6 = |%c| é letra do alfabeto\n", var6);
   else
      printf("var6 = |%c| não é letra do alfabeto\n", var6);

   return(0);
}

/* 

DESCRIÇÃO:

   - A função int isalpha(int c) verifica se o caracter passado é do alfabeto.

   - alpha:

      Letras maiusculas e minusculas.

DECLARAÇÃO:

   int isalpha(int c);

PARÂMETROS:

    c − Caractere que será analisado.

RETORNO:

   - A função retorna um número diferente de zero se "c" for uma letra

   - A função retorna 0 caso contrario.

*/