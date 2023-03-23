#include <stdio.h>

int main()
{
int lanche, bebida;

printf("+ Selecione o lanche +\n");
printf("+--------------------+------------------+------------\n");
printf("+ 1 - Bauru          + 2 - X Galinha    + 3 - Pizza  \n");
printf("+--------------------+------------------+------------\n");
scanf("%d", &lanche);

printf("\n");
printf("+ Selecione a bebida +\n");
printf("+--------------------+------------------+------------\n");
printf("+ 1 - Guaraná        + 2 - Água         + 3 - Vinho  \n");
printf("+--------------------+------------------+------------\n");
scanf("%d", &bebida);

printf("\n");

if ((lanche == 1 && bebida == 1) || (lanche == 2 && bebida == 2) || (lanche == 3 && bebida != 2 && bebida != 1))
{
    printf("\nNão é possível a combinação!");
}
else
{
    printf("Pedido anotado, aguarde seu lanche e bebida!");
}

return 0;

}