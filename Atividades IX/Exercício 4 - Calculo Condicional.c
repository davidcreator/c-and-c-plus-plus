<<<<<<< HEAD
#include <stdio.h>

int main()
{
    int idade[10], qtd_maior_idade = 0, qtd_sexo_feminino = 0;
    char sexo[10];

    for(int x = 0; x < 10; x++){
        printf("Informe a %dª idade: ", x+1);
        scanf("%d", &idade[x]);
        if(idade[x] >= 18){
            qtd_maior_idade++;
        }
    }
    system("cls");

    for(int x = 0; x < 10; x++){
        printf("Informe o %dº sexo [F | M]: ", x+1);
        scanf(" %c", &sexo[x]);
        if(sexo[x] == 'F' || sexo[x] == 'f'){
            qtd_sexo_feminino++;
        }
    }
    system("cls");

    printf("Quantidade maior de idade: %d\n", qtd_maior_idade);
    printf("Quantidade sexo feminino: %d\n", qtd_sexo_feminino);

    return 0;
}
=======
#include <stdio.h>

int main()
{
    int idade[10], qtd_maior_idade = 0, qtd_sexo_feminino = 0;
    char sexo[10];

    for(int x = 0; x < 10; x++){
        printf("Informe a %dª idade: ", x+1);
        scanf("%d", &idade[x]);
        if(idade[x] >= 18){
            qtd_maior_idade++;
        }
    }
    system("cls");

    for(int x = 0; x < 10; x++){
        printf("Informe o %dº sexo [F | M]: ", x+1);
        scanf(" %c", &sexo[x]);
        if(sexo[x] == 'F' || sexo[x] == 'f'){
            qtd_sexo_feminino++;
        }
    }
    system("cls");

    printf("Quantidade maior de idade: %d\n", qtd_maior_idade);
    printf("Quantidade sexo feminino: %d\n", qtd_sexo_feminino);

    return 0;
}
>>>>>>> 0022760d633179861383ecd64ba21a7ac7149f23
