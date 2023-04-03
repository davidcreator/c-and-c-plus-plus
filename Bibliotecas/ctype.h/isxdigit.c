#include <stdio.h>
#include <ctype.h>

int main() {

   int var1 = 'd';
   int var2 = 'H';
   int var3 = '2';
   int var4 = '\t';
   int var5 = ' ';
   int var6 = '.';
    
   if(isxdigit(var1))
      printf("var1 = |%c| é um número hexadecimal\n", var1);
   else
      printf("var1 = |%c| não é um número hexadecimal\n", var1);
   
   if(isxdigit(var2))
      printf("var2 = |%c| é um número hexadecimal\n", var2);
   else
      printf("var2 = |%c| não é um número hexadecimal\n", var2);
   
   if(isxdigit(var3)) 
      printf("var3 = |%c| é um número hexadecimal\n", var3);
   else
      printf("var3 = |%c| não é um número hexadecimal\n", var3);
   
   if(isxdigit(var4))
      printf("var4 = |%c| ou tab é um número hexadecimal\n", var4);
   else
      printf("var4 = |%c| ou tab não é um número hexadecimal\n", var4);

   if(isxdigit(var5))
      printf("var5 = |%c| é um número hexadecimal\n", var5);
   else
      printf("var5 = |%c| não é um número hexadecimal\n", var5);

   if(isxdigit(var6))
      printf("var6 = |%c| é um número hexadecimal\n", var6);
   else
      printf("var6 = |%c| não é um número hexadecimal\n", var6);

   return(0);
}

/* 

DESCRIÇÃO:

   - A função int isxdigit(int c) verifica se o caracter passado é um número hexadecimal.

   - número hexadecimal:

      { 0 1 2 3 4 5 6 7 8 9 A B C D E F a b c d e f }.

DECLARAÇÃO:

   int isxdigit(int c);

PARÂMETROS:

    c − Caractere que será analisado.

RETORNO:

   - A função retorna um um número hexadecimal diferente de zero se "c" for um número hexadecimal

   - A função retorna 0 caso contrario.

*/