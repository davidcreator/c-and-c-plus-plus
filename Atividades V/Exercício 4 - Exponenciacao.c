<<<<<<< HEAD
#include <stdio.h>
#include <math.h>

int testeAB(double X, double Y);
double calculaA_elevado_B(double D, double F);

int main()
{
    double A, B, C;

    printf("\nInforme o valor de A: ");
    scanf("%lf", &A);
    printf("\nInforme o valor de B: ");
    scanf("%lf", &B);
    system("clear");

    while(testeAB(A, B) != 1)
    {
        printf("\nInforme o valor de A: ");
        scanf("%lf", &A);
        printf("\nInforme o valor de B: ");
        scanf("%lf", &B);
        system("clear");
    }

    C = calculaA_elevado_B(A, B);

    printf("\nO valor de A^B é: %.2lf", C);

    return 0;
}

int testeAB(double X, double Y)
{
    if(X > Y)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

double calculaA_elevado_B(double D, double F)
{
    return pow(D, F);
}
=======
#include <stdio.h>
#include <math.h>

int testeAB(double X, double Y);
double calculaA_elevado_B(double D, double F);

int main()
{
    double A, B, C;

    printf("\nInforme o valor de A: ");
    scanf("%lf", &A);
    printf("\nInforme o valor de B: ");
    scanf("%lf", &B);
    system("clear");

    while(testeAB(A, B) != 1)
    {
        printf("\nInforme o valor de A: ");
        scanf("%lf", &A);
        printf("\nInforme o valor de B: ");
        scanf("%lf", &B);
        system("clear");
    }

    C = calculaA_elevado_B(A, B);

    printf("\nO valor de A^B é: %.2lf", C);

    return 0;
}

int testeAB(double X, double Y)
{
    if(X > Y)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

double calculaA_elevado_B(double D, double F)
{
    return pow(D, F);
}
>>>>>>> 0022760d633179861383ecd64ba21a7ac7149f23
