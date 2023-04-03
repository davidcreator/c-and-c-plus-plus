#include <stdio.h>
#include <string.h>

int main() {

   char dest[] = "oldstring";
   const char src[]  = "newstring";

   printf("Antes memmove dest = %s, src = %s\n", dest, src);
   memmove(dest, src, 9);
   printf("Depois memmove dest = %s, src = %s\n", dest, src);

   return(0);
}

/*

DEFINIÇÃO:

	- Copia uma quantidade de bytes de uma área de memória para outra

	- Ambas as regiões de memória são tratadas com unsigned char (byte a byte)

DECLARAÇÃO:

	void *memmove(void *dest, const void *orig, size_t n)

PARÂMETROS:

	dest -- ponteiro para a região de memória que receberá os dados copiados.

	orig -- Ponteiro para a região de memória onde os dados serão copiados.

	n -- Número de bytes que será preenchido, não é necessáriamente o tamanho do array

RETORNO:

	- Retorna uma cópia do ponteiro dest.

	- Retorna NULL em caso de erro.

OBS:

	- Comportamento igual ao memcpy()

	- mais lenta

	- Mais segura no caso de tiver sobreposição entre as duas regiões de memória, usa um array
	auxiliar para fazer a copia.

	- sobreposição é quando está copiado duas áreas de memórias iguais, por exemplo, de 0 a 10
	temos 0,1,2,3,4,5,6,7,8,9,10 e de 3 a 13 temos 3,4,5,6,7,8,9,10,11,12,13 logo se copiarmos
	uma para a outra irá se sobrepor as posições 3,4,5,6,7,8,9,10

		char str[16]
		memcpy(&str[0], &str[3], 10); //invalido
		memmove(&str[0], &str[3], 10); //valido

*/