#include <stdio.h>
#include <math.h>

double calculaR(double a, double b);
double calculaS(double b, double c);
double calculaD(double r, double s);

int main()
{
    double A, B, C, R, S, D;

    printf("\nInforme o valor A: ");
    scanf("%lf", &A);
    printf("\nInforme o valor B: ");
    scanf("%lf", &B);
    printf("\nInforme o valor C: ");
    scanf("%lf", &C);

    R = calculaR(A, B);
    S = calculaS(B, C);
    D = calculaD(R, S);

    printf("\nO valor é: %.2lf", D);

    return 0;
}

double calculaR(double a, double b)
{
    double r;
    r = pow(a + b, 2.0);

    return r;
}

double calculaS(double b, double c)
{
    double s;
    s = pow(b + c, 2.0);

    return s;
}

double calculaD(double r, double s)
{
    double d;
    d = (r + s) / 2;

    return d;
}
