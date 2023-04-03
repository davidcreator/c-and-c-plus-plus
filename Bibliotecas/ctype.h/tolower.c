#include <stdio.h>
#include <ctype.h>

int main() {

   int i = 0;
   char str[] = "LETRAS EM MINUSCULO";

   printf("%s\n", str);

   while(str[i]) {
      putchar(tolower(str[i]));
      i++;
   }
   printf("\n");
      
   return(0);
}

/* 

DESCRIÇÃO:

   - A função int tolower(int c) converte a letra em letra minuscula.

   - letra minuscula:

      {a, b, c, d, e, f, g, h, i ,j k, l, m, n, o, p, q, r, s, t, u, v, x, y, z, w}.

DECLARAÇÃO:

   int tolower(int c);

PARÂMETROS:

    c − Caractere que será analisado.

RETORNO:

   - Retorna o caractere em minusculo, se o caracter existir

   - Caso contrario não altera nada.

*/