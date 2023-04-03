#include <stdio.h>
#include <ctype.h>

int main() {

   int i = 0;
   char str[] = "letras em maiusculo";

   printf("%s\n", str);

   while(str[i]) {
      putchar(toupper(str[i]));
      i++;
   }
   printf("\n");
      
   return(0);
}

/* 

DESCRIÇÃO:

   - A função int toupper(int c) converte a letra em letra maiuscula.

   - letra maiuscula:

      {A B C D E F G H I J K L M N O P Q R S T U V W X Y Z }.

DECLARAÇÃO:

   int toupper(int c);

PARÂMETROS:

    c − Caractere que será analisado.

RETORNO:

   - Retorna o caractere em maiusculo, se o caracter existir

   - Caso contrario não altera nada.

*/