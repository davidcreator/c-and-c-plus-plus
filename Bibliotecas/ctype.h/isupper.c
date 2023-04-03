#include <stdio.h>
#include <ctype.h>

int main() {

   int var1 = 'd';
   int var2 = 'D';
   int var3 = '2';
   int var4 = '\t';
   int var5 = ' ';
   int var6 = '.';
    
   if(isupper(var1))
      printf("var1 = |%c| é uma letra maiuscula\n", var1);
   else
      printf("var1 = |%c| não é uma letra maiuscula\n", var1);
   
   if(isupper(var2))
      printf("var2 = |%c| é uma letra maiuscula\n", var2);
   else
      printf("var2 = |%c| não é uma letra maiuscula\n", var2);
   
   if(isupper(var3)) 
      printf("var3 = |%c| é uma letra maiuscula\n", var3);
   else
      printf("var3 = |%c| não é uma letra maiuscula\n", var3);
   
   if(isupper(var4))
      printf("var4 = |%c| ou tab é uma letra maiuscula\n", var4);
   else
      printf("var4 = |%c| ou tab não é uma letra maiuscula\n", var4);

   if(isupper(var5))
      printf("var5 = |%c| é uma letra maiuscula\n", var5);
   else
      printf("var5 = |%c| não é uma letra maiuscula\n", var5);

   if(isupper(var6))
      printf("var6 = |%c| é uma letra maiuscula\n", var6);
   else
      printf("var6 = |%c| não é uma letra maiuscula\n", var6);

   return(0);
}

/* 

DESCRIÇÃO:

   - A função int isupper(int c) verifica se o caracter passado é uma letra maiuscula.

   - letra maiuscula:

      {A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P, Q, R, S, T, U, V, X, Y, Z, W}.

DECLARAÇÃO:

   int isupper(int c);

PARÂMETROS:

    c − Caractere que será analisado.

RETORNO:

   - A função retorna um uma letra maiuscula diferente de zero se "c" for uma letra maiuscula

   - A função retorna 0 caso contrario.

*/