#include <stdio.h>

int main()
{
char nome[50];
char sexo;
int idade;
float salario;

printf("Informe o nome do funcionário: \n");
scanf("%s", nome);

printf("Informe a idade do funcionário: \n");
scanf("%d", &idade);

printf("Informe o sexo do funcionário: (M - Masculino ou F - Feminino) \n");
scanf(" %c", &sexo);

printf("Informe o salário fixo R$: \n");
scanf("%f", &salario);

if(sexo == 'M' && idade >= 30){ 
    salario += 100;
    printf("O salário do(a) funcionário %s é de R$ %.2f\n", nome, salario);
}
else if (sexo == 'M' && idade < 30){ 
    salario += 50;
    printf("O salário do(a) funcionário %s é de R$ %.2f\n", nome, salario);
}
else if (sexo == 'F' && idade >= 30){ 
    salario += 200;
    printf("O salário do(a) funcionário %s é de R$ %.2f\n", nome, salario);
}
else if (sexo == 'F' && idade < 30){ 
    salario += 80;
    printf("O salário do(a) funcionário %s é de R$ %.2f\n", nome, salario);
}
}