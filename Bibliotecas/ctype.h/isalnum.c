#include <stdio.h>
#include <ctype.h>

int main() {

   int var1 = 'd';
   int var2 = 'D';
   int var3 = '2';
   int var4 = '\t';
   int var5 = ' ';
   int var6 = '.';
    
   if(isalnum(var1))
      printf("var1 = |%c| é alphanumerico\n", var1);
   else
      printf("var1 = |%c| não é alphanumerico\n", var1);
   
   if(isalnum(var2))
      printf("var2 = |%c| é alphanumerico\n", var2);
   else
      printf("var2 = |%c| não é alphanumerico\n", var2);
   
   if(isalnum(var3)) 
      printf("var3 = |%c| é alphanumerico\n", var3);
   else
      printf("var3 = |%c| não é alphanumerico\n", var3);
   
   if(isalnum(var4))
      printf("var4 = |%c| ou tab é alphanumerico\n", var4);
   else
      printf("var4 = |%c| ou tab não é alphanumerico\n", var4);

   if(isalnum(var5))
      printf("var5 = |%c| é alphanumerico\n", var5);
   else
      printf("var5 = |%c| não é alphanumerico\n", var5);

   if(isalnum(var6))
      printf("var6 = |%c| é alphanumerico\n", var6);
   else
      printf("var6 = |%c| não é alphanumerico\n", var6);

   return(0);
}

/* 

DESCRIÇÃO:

   - A função int isalnum(int c) verifica se o caracter passado é alphanumerico.

   - alphanumerico:

      { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 }
      Letras maiusculas e minusculas.

DECLARAÇÃO:

   int isalnum(int c);

PARÂMETROS:

    c − Caractere que será analisado.

RETORNO:

   - A função retorna um número diferente de zero se "c" for um número ou uma letra

   - A função retorna 0 caso contrario.

*/