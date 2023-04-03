#include <stdio.h>
#include <ctype.h>

int main() {

   int var1 = 'd';
   int var2 = 'D';
   int var3 = '2';
   int var4 = '\t';
   int var5 = ' ';
   int var6 = '.';
    
   if(isgraph(var1))
      printf("var1 = |%c| é imprimivel\n", var1);
   else
      printf("var1 = |%c| não é imprimivel\n", var1);
   
   if(isgraph(var2))
      printf("var2 = |%c| é imprimivel\n", var2);
   else
      printf("var2 = |%c| não é imprimivel\n", var2);
   
   if(isgraph(var3)) 
      printf("var3 = |%c| é imprimivel\n", var3);
   else
      printf("var3 = |%c| não é imprimivel\n", var3);
   
   if(isgraph(var4))
      printf("var4 = |%c| ou tab é imprimivel\n", var4);
   else
      printf("var4 = |%c| ou tab não é imprimivel\n", var4);

   if(isgraph(var5))
      printf("var5 = |%c| é imprimivel\n", var5);
   else
      printf("var5 = |%c| não é imprimivel\n", var5);

   if(isgraph(var6))
      printf("var6 = |%c| é imprimivel\n", var6);
   else
      printf("var6 = |%c| não é imprimivel\n", var6);

   return(0);
}

/* 

DESCRIÇÃO:

   - A função int isgraph(int c) verifica se o caracter passado é imprimivel.

   - imprimivel:

      Engloba os alphanumericos e as pontuações.

DECLARAÇÃO:

   int isgraph(int c);

PARÂMETROS:

    c − Caractere que será analisado.

RETORNO:

   - A função retorna um imprimivel diferente de zero se "c" for imprimivel

   - A função retorna 0 caso contrario.

*/