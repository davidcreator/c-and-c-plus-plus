#include <stdio.h>
#include <ctype.h>

int main() {

   int var1 = 'd';
   int var2 = 'D';
   int var3 = '2';
   int var4 = '\t';
   int var5 = ' ';
   int var6 = '.';
    
   if(isprint(var1))
      printf("var1 = |%c| é um caracter imprimivel\n", var1);
   else
      printf("var1 = |%c| não é um caracter imprimivel\n", var1);
   
   if(isprint(var2))
      printf("var2 = |%c| é um caracter imprimivel\n", var2);
   else
      printf("var2 = |%c| não é um caracter imprimivel\n", var2);
   
   if(isprint(var3)) 
      printf("var3 = |%c| é um caracter imprimivel\n", var3);
   else
      printf("var3 = |%c| não é um caracter imprimivel\n", var3);
   
   if(isprint(var4))
      printf("var4 = |%c| ou tab é um caracter imprimivel\n", var4);
   else
      printf("var4 = |%c| ou tab não é um caracter imprimivel\n", var4);

   if(isprint(var5))
      printf("var5 = |%c| é um caracter imprimivel\n", var5);
   else
      printf("var5 = |%c| não é um caracter imprimivel\n", var5);

   if(isprint(var6))
      printf("var6 = |%c| é um caracter imprimivel\n", var6);
   else
      printf("var6 = |%c| não é um caracter imprimivel\n", var6);

   return(0);
}

/* 

DESCRIÇÃO:

   - A função int isprint(int c) verifica se o caracter passado é um um caracter imprimivel.

   - um caracter imprimivel:

      Engloba letras maiusculas e minusculas, numeros, pontuação e espaço

DECLARAÇÃO:

   int isprint(int c);

PARÂMETROS:

    c − Caractere que será analisado.

RETORNO:

   - A função retorna um um caracter imprimivel diferente de zero se "c" for um um caracter imprimivel

   - A função retorna 0 caso contrario.

*/