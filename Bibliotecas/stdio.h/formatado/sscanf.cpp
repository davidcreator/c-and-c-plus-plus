#include <stdlib.h>
#include <stdio.h>
#include <string.h> 

int main(){

  int dia, ano;
  char dia_da_semana[20], mes[20], data[100];

  strcpy(data, "Sabado Março 25 1999" );
  sscanf(data, "%s %s %d %d", dia_da_semana, mes, &dia, &ano );

  printf("%d/%s/%d = %s\n", dia, mes, ano, dia_da_semana );

  return 0;
}

/* --------------------------------- RESUMO DO CÓDIGO -----------------------------------

  DEFINIÇÃO:

    - Lê a entrada formatada de um string.

    - O formato para o parâmetro format segue o seguinte formato: 
      [=%[*][width][modifiers]type=]

  DECLARAÇÃO:

    int sscanf(const char *str, const char *format, ...)

  PARAMETROS:

    str = Esta é a string que será processada e pego os dados.

    format = Esta é a string C que contém um ou mais dos seguintes itens: 
    espaço em branco, caracteres não-espaço em branco e formato especificadores

    ... = Argumentos ilimitados para os especificadores %, como no printf();

  OBSERVAÇÕES:

    * -- Este é um asterisco partida opcional, o que indica que os dados devem ser 
    lidos do fluxo, mas ignorada, isto é, não é armazenado no argumento correspondente.

    width -- Isso especifica o número máximo de caracteres para ser lido na operação 
    de leitura atual.

    modifiers -- Especifica um tamanho diferente de 
                  int(no caso de d, i e n), 
                  unsigned int(no caso de o, u e x) ou float(no caso de e, f e g)
                 Para os dados apontados pela correspondente argumento adicional: 
                  h: short int(para d, i e n), ou unsigned short int(para o, u e x) 
                  l: long int(para d, i e n), ou unsigned long int(para o, u e x), ou 
                  duplo(para e, f e g).
                  L: long double (para e, f e g)

    type -- Um carácter que especifica o tipo de dados a serem lidos e como é esperado 
    para ser lido.

  RETORNO

    - Em caso de sucesso, a função retorna o número de variáveis preenchidas.

    - No caso de uma falha de entrada antes de quaisquer dados podem ser lidos com 
    sucesso, é devolvido EOF.

---------------------------------------------------------------------------------------- */