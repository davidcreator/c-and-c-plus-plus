#include <stdio.h>
#include <math.h>

int main()
{
    double area, raio;

    printf("\nInforme o raio da circurferência (cm): ");
    scanf("%lf", &raio);

    area = M_PI * pow(raio, 2.0);

    area = round(area * 100) / 100;

    system("clear");

    printf("\nA área da circunferência é %.2lf cm²", area);

    return 0;
}
