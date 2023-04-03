#include <stdio.h>
#include <string.h>

int main() {
   
   char src[40];
   char dest[100];
  
   strcpy(src, "Este é o site: tutorialspoint.com");
   strcpy(dest, src);

   printf("Original: %s\n", src);
   printf("Copia : %s\n", dest);
   
   return(0);
}

/*
DESCRIÇÃO:

	- A função char *strcpy(char *dest, const char *src) Copia a string src na dest. 

DECLARAÇÃO:

	- Declaração da função strcpy().

		char *strcpy(char *dest, const char *src)

PARAMETROS:

    dest -- String na qual o conteudo copiado será inserido.

    src -- String na qual será copiada.

RETORNO:

	- Retorna um ponteiro para a string destino, que receberá a copia, dest.

*/