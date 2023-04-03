#include <stdio.h>

int main()
{
int cpf[] = {1,2,2,4,7,8,4,9,0};
int cpf1[10];
int cpf2[11];
int mult1[] = {10,9,8,7,6,5,4,3,2};
int mult2[] = {11,10,9,8,7,6,5,4,3,2};
int soma = 0;
int resto;
int dv1, dv2;

for(int i = 0; i < 9; i++){
    soma += (cpf[i] * mult1[i]);
}
resto = soma % 11;
dv1 = 11 - resto;

if(dv1 > 9){
    dv1 = 0;
}
for(int i = 0; i < 9; i++){
    cpf1[i] = cpf[i];
}
cpf1[9] = dv1;
soma = 0;

for(int i = 0; i < 10; i++){
    soma += (cpf1[i] * mult2[i]);
}
resto = soma % 11;
dv2 = 11 - resto;

if(dv2 > 9){
    dv2 = 0;
}
for(int i = 0; i < 10; i++){
    cpf2[i] = cpf1[i];
}
cpf2[10] = dv2;

printf("O CPF é: ");
for(int i = 0; i < 11; i++){
    printf("%d", cpf2[i]);
}

return 0;
}