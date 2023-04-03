#include <stdio.h>
#include <string.h>

int main() {

   const char src[50] = "depois da copia";
   char dest[50] = "antes da copia";

   printf("Antes memcpy dest = %s\n", dest);
   memcpy(dest, src, strlen(src)+1);
   printf("Depois memcpy dest = %s\n", dest);
   
   return(0);
}

/*

DEFINIÇÃO:

	- Copia uma quantidade de bytes de uma área de memória para outra

	- Ambas as regiões de memória são tratadas com unsigned char (byte a byte)

DECLARAÇÃO:

	void *memcpy(void *dest, const void *orig, size_t n)

PARÂMETROS:

	dest -- ponteiro para a região de memória que receberá os dados copiados.

	orig -- Ponteiro para a região de memória onde os dados serão copiados.

	n -- Número de bytes que será preenchido, não é necessáriamente o tamanho do array

RETORNO:

	- Retorna uma cópia do ponteiro dest.

	- Retorna NULL em caso de erro.

OBS:

	- É a função mais rápida de cópia entre regiões de memória

	- Seu comportamento é indefinido se existir sobreposição entre as duas regiões de memória

	- sobreposição é quando está copiado duas áreas de memórias iguais, por exemplo, de 0 a 10
	temos 0,1,2,3,4,5,6,7,8,9,10 e de 3 a 13 temos 3,4,5,6,7,8,9,10,11,12,13 logo se copiarmos
	uma para a outra irá se sobrepor as posições 3,4,5,6,7,8,9,10

*/