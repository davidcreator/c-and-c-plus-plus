#include <stdio.h>
#include <ctype.h>

int main() {

   int var1 = 'd';
   int var2 = 'D';
   int var3 = '2';
   int var4 = '\t';
   int var5 = ' ';
   int var6 = '.';
    
   if(isspace(var1))
      printf("var1 = |%c| é um espaço\n", var1);
   else
      printf("var1 = |%c| não é um espaço\n", var1);
   
   if(isspace(var2))
      printf("var2 = |%c| é um espaço\n", var2);
   else
      printf("var2 = |%c| não é um espaço\n", var2);
   
   if(isspace(var3)) 
      printf("var3 = |%c| é um espaço\n", var3);
   else
      printf("var3 = |%c| não é um espaço\n", var3);
   
   if(isspace(var4))
      printf("var4 = |%c| ou tab é um espaço\n", var4);
   else
      printf("var4 = |%c| ou tab não é um espaço\n", var4);

   if(isspace(var5))
      printf("var5 = |%c| é um espaço\n", var5);
   else
      printf("var5 = |%c| não é um espaço\n", var5);

   if(isspace(var6))
      printf("var6 = |%c| é um espaço\n", var6);
   else
      printf("var6 = |%c| não é um espaço\n", var6);

   return(0);
}

/* 

DESCRIÇÃO:

   - A função int isspace(int c) verifica se o caracter passado é um espaço.

   - um espaço:

      " "

DECLARAÇÃO:

   int isspace(int c);

PARÂMETROS:

    c − Caractere que será analisado.

RETORNO:

   - A função retorna um um espaço diferente de zero se "c" for um espaço

   - A função retorna 0 caso contrario.

*/