#include <stdio.h>  
#include <math.h> 

int main() {

  printf ( "função modular de 5.3/2 é %f\n", fmod (5.3,2) );
  printf ( "função modular de 18.5/4.2 é %f\n", fmod (18.5,4.2) );

  return 0;
}

/* ----------------------------------- RESUMO DO CÓDIGO --------------------------------

DESCRIÇÃO:

	- Retorna o resto de ponto flutuante da divisão numer/denom (arredondado para zero):

		fmod = numerador - &quociente * denominador

	- Onde & quot é o truncada (isto é, arredondado para zero) resultado de: numer/denom.

	- Uma função semelhante, remainder(), retorna a mesma, mas com o quociente arredondado 
	para o número inteiro mais próximo (em vez de truncado).

DECLARAÇÃO:

	double fmod(double numer, double denom);

PARAMETROS:

    numer -- Numerador.

    denom -- Denominador

RETORNO:

	- O resto da divisão dos argumentos.

	Se denominador é zero, a função pode devolver zero ou causar um erro de domínio 
	(dependendo da implementação da biblioteca).

---------------------------------------------------------------------------------------*/