#include <stdio.h>
#include <string.h>

int main() {

   char src[50], dest[50];

   strcpy(src,  "esta é a string a ser anexada");
   strcpy(dest, "Esta é a string destino, ");

   strncat(dest, src, 16);

   printf("String resultante da concatenação: |%s|\n", dest);
   
   return(0);
}

/* 

DESCRIÇÃO:

	- A função char *strncat(char *dest, const char *src, size_t n) anexar a string apontada 
	por src para o final da string apontada por dest até n caracteres.

DECLARAÇÃO:

	- Declaração da função strncat().

		char *strncat(char *dest, const char *src, size_t n)

PARAMETROS:

    dest -- Este é ponteiro para a string destino, que deve conter uma string em C, 
    				e deve ser grande o suficiente para conter a string resultante concatenadas 
    				que inclui o nulo caracteres adicionais (/0).

    src -- A string na qual será anexada.

    n -- Este é o número máximo de caracteres que será acrescentado.

RETORNO:

	- Esta função retorna um ponteiro para a string dest resultante.

*/