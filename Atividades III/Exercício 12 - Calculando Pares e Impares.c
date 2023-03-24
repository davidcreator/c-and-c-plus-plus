#include <stdio.h>

int main()
{
int par=0, impar=0, produtoPar=1 ,somaImpar=0, nro, x;

for (x = 0; x < 20; x++) {
    printf("\nDigite um valor inteiro: ");
    scanf("%d", &nro);

    if (nro == 0) {
        break;
    }

    while (nro < 0) {
        printf("\nValor inválido, tente um número possitivo: ");
        scanf("%d", &nro);
    }

    if (nro % 2 == 0) {
        par += 1;
        produtoPar *= nro;
    } else {
        impar += 1;
        somaImpar += nro;
    }
}

printf("\nNumero de impares: %d", impar);
printf("\nNumero de pares: %d", par);
printf("\nO produto dos pares: %d", produtoPar);
printf("\nA soma dos impares: %d", somaImpar);

return 0;

}
