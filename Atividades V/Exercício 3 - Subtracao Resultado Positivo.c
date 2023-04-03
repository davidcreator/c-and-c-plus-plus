<<<<<<< HEAD
#include <stdio.h>
#include <math.h>

double calculaAB(double X, double Y);

int main()
{
    double A, B, C;

    printf("\nInforme o valor de A: ");
    scanf("%lf", &A);
    printf("\nInforme o valor de B: ");
    scanf("%lf", &B);

    C = calculaAB(A, B);
    printf("\nO resultado absoluto é: %.2lf", C);

    return 0;
}

double calculaAB(double X, double Y)
{
    double Z;
    Z = fabs(X - Y);

    return Z;
}
=======
#include <stdio.h>
#include <math.h>

double calculaAB(double X, double Y);

int main()
{
    double A, B, C;

    printf("\nInforme o valor de A: ");
    scanf("%lf", &A);
    printf("\nInforme o valor de B: ");
    scanf("%lf", &B);

    C = calculaAB(A, B);
    printf("\nO resultado absoluto é: %.2lf", C);

    return 0;
}

double calculaAB(double X, double Y)
{
    double Z;
    Z = fabs(X - Y);

    return Z;
}
>>>>>>> 0022760d633179861383ecd64ba21a7ac7149f23
