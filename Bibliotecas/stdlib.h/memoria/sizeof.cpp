#include <stdlib.h>
#include <stdio.h> 

struct ponto {
  int x, y, z;
};

int main(){

  printf("char = %ld bytes\n", sizeof(char));
  printf("short = %ld bytes\n", sizeof(short));
  printf("int = %ld bytes\n", sizeof(int));
  printf("long = %ld bytes\n", sizeof(long));
  printf("float = %ld bytes\n", sizeof(float));
  printf("double = %ld bytes\n", sizeof(double));
  printf("struct ponto = %ld bytes\n", sizeof(struct ponto));

	return 0;
}

/* --------------------------------- RESUMO DO CÓDIGO -----------------------------------

  DEFINIÇÃO: 

    - Alocar memória do tipo int é diferente de alocar memória do tipo char

  TIPOS:

    - char = 1 byte
    - int = 4 bytes
    - float = 4 bytes
    - double = 8 bytes

  OBSERVAÇÕES:

    - O comando sizeof() retorna o número de bytes necessarios para alocar um único elemento de um determinado tipo de dado.

      int tamanho_do_inteiro = sizeof(int)

-------------------------------------------------------------------------------------------*/