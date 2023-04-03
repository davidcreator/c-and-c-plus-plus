#include <stdio.h>
#include <ctype.h>

int main() {

   int var1 = 'd';
   int var2 = 'D';
   int var3 = '2';
   int var4 = '\t';
   int var5 = ' ';
   int var6 = '.';
    
   if(islower(var1))
      printf("var1 = |%c| é letra minuscula\n", var1);
   else
      printf("var1 = |%c| não é letra minuscula\n", var1);
   
   if(islower(var2))
      printf("var2 = |%c| é letra minuscula\n", var2);
   else
      printf("var2 = |%c| não é letra minuscula\n", var2);
   
   if(islower(var3)) 
      printf("var3 = |%c| é letra minuscula\n", var3);
   else
      printf("var3 = |%c| não é letra minuscula\n", var3);
   
   if(islower(var4))
      printf("var4 = |%c| ou tab é letra minuscula\n", var4);
   else
      printf("var4 = |%c| ou tab não é letra minuscula\n", var4);

   if(islower(var5))
      printf("var5 = |%c| é letra minuscula\n", var5);
   else
      printf("var5 = |%c| não é letra minuscula\n", var5);

   if(islower(var6))
      printf("var6 = |%c| é letra minuscula\n", var6);
   else
      printf("var6 = |%c| não é letra minuscula\n", var6);

   return(0);
}

/* 

DESCRIÇÃO:

   - A função int islower(int c) verifica se o caracter passado é uma letra minuscula.

   - letra minuscula:

      {a, b, c, d, e, f, g, h, i ,j k, l, m, n, o, p, q, r, s, t, u, v, x, y, z, w}.

DECLARAÇÃO:

   int islower(int c);

PARÂMETROS:

    c − Caractere que será analisado.

RETORNO:

   - A função retorna um letra minuscula diferente de zero se "c" for uma letra minuscula

   - A função retorna 0 caso contrario.

*/