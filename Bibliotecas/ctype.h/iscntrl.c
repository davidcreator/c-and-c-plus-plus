#include <stdio.h>
#include <ctype.h>

int main() {

   int var1 = 'd';
   int var2 = 'D';
   int var3 = '2';
   int var4 = '\t';
   int var5 = ' ';
   int var6 = '.';
    
   if(iscntrl(var1))
      printf("var1 = |%c| é caractere de controle\n", var1);
   else
      printf("var1 = |%c| não é caractere de controle\n", var1);
   
   if(iscntrl(var2))
      printf("var2 = |%c| é caractere de controle\n", var2);
   else
      printf("var2 = |%c| não é caractere de controle\n", var2);
   
   if(iscntrl(var3)) 
      printf("var3 = |%c| é caractere de controle\n", var3);
   else
      printf("var3 = |%c| não é caractere de controle\n", var3);
   
   if(iscntrl(var4))
      printf("var4 = |%c| ou tab é caractere de controle\n", var4);
   else
      printf("var4 = |%c| ou tab não é caractere de controle\n", var4);

   if(iscntrl(var5))
      printf("var5 = |%c| é caractere de controle\n", var5);
   else
      printf("var5 = |%c| não é caractere de controle\n", var5);

   if(iscntrl(var6))
      printf("var6 = |%c| é caractere de controle\n", var6);
   else
      printf("var6 = |%c| não é caractere de controle\n", var6);

   return(0);
}

/* 

DESCRIÇÃO:

   - A função int iscntrl(int c) verifica se o caracter passado é do um caracter de
   controle.

   - control caracter:

      Na tabela ASCII, estes caracteres tem codigo octal 000 até 037, e 177 (DEL).

      \n \t e etc...

DECLARAÇÃO:

   int iscntrl(int c);

PARÂMETROS:

    c − Caractere que será analisado.

RETORNO:

   - A função retorna um número diferente de zero se "c" for um caracter de controle

   - A função retorna 0 caso contrario.

*/