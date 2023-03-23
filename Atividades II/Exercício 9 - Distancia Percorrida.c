#include <stdio.h>

int main()
{
int dist;
printf("Informe a distância percorrida pelo nadador: \n");
scanf("%d", &dist);
if(dist < 800){
printf("O prêmio é de R$ 5.000,00");
} else if (dist >= 800 && dist <= 1500){
printf("O prêmio é de R$ 10.000,00");
} else {
printf("O prêmio é de R$ 15.000,00");
}
return 0;
}