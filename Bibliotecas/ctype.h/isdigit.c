#include <stdio.h>
#include <ctype.h>

int main() {

   int var1 = 'd';
   int var2 = 'D';
   int var3 = '2';
   int var4 = '\t';
   int var5 = ' ';
   int var6 = '.';
    
   if(isdigit(var1))
      printf("var1 = |%c| é número\n", var1);
   else
      printf("var1 = |%c| não é número\n", var1);
   
   if(isdigit(var2))
      printf("var2 = |%c| é número\n", var2);
   else
      printf("var2 = |%c| não é número\n", var2);
   
   if(isdigit(var3)) 
      printf("var3 = |%c| é número\n", var3);
   else
      printf("var3 = |%c| não é número\n", var3);
   
   if(isdigit(var4))
      printf("var4 = |%c| ou tab é número\n", var4);
   else
      printf("var4 = |%c| ou tab não é número\n", var4);

   if(isdigit(var5))
      printf("var5 = |%c| é número\n", var5);
   else
      printf("var5 = |%c| não é número\n", var5);

   if(isdigit(var6))
      printf("var6 = |%c| é número\n", var6);
   else
      printf("var6 = |%c| não é número\n", var6);

   return(0);
}

/* 

DESCRIÇÃO:

   - A função int isdigit(int c) verifica se o caracter passado é número.

   - número:

      Engloba os alphanumericos e as pontuações.

DECLARAÇÃO:

   int isdigit(int c);

PARÂMETROS:

    c − Caractere que será analisado.

RETORNO:

   - A função retorna um número diferente de zero se "c" for número

   - A função retorna 0 caso contrario.

*/