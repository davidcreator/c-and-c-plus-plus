#include <stdio.h>
#include <math.h>

int main() {

  char str[50];
  int resultado, a=5, b=3;
  
  resultado = sprintf(str, "%d plus %d is %d", a, b, a+b);
  printf ("[%s] é a string que foi formatada com %d caracteres\n", str, resultado);
  return 0;
   
   return(0);
}

/* --------------------------------- RESUMO DO CÓDIGO -----------------------------------

  DEFINIÇÃO:

    - Envia a saída formatada para um string apontada, por str.

    - O formato para o parâmetro format segue o seguinte formato: 
      %[flags][width][.precision][length]specifier

  DECLARAÇÃO:

    int sprintf(char *str, const char *format, ...)

  PARAMETROS:

    str = Esta é a string que irá armazenar os dados formatados.

    format = Esta é a string C que contém um ou mais dos seguintes itens: 
    espaço em branco, caracteres não-espaço em branco e formato especificadores

    ... = Argumentos ilimitados para os especificadores %, como no printf();

  RETORNO

    - Em caso de sucesso, o número total de caracteres gravados é devolvido.

    - Esta contagem não inclui o nulo caracteres adicional acrescentada automaticamente 
    no final da string.

    - Em caso de falha, um número negativo é devolvido.

---------------------------------------------------------------------------------------- */