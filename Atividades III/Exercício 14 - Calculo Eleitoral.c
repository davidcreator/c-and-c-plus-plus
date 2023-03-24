#include <stdio.h>

int main()
{
int voto, votoJoao=0, votoMaria=0, votoPedro=0, votoMarcos=0, nulo=0, branco=0, totalVotos=0;
char novoVoto = 'S';
float perc_nulo, perc_branco;

while (novoVoto == 'S')
{
    printf("\nInforme o voto eleitor: ");
    printf("\n|1 - João | 2 - Maria | 3 - Pedro | 4 - Marcos | 5 - Nulo | 6 - Branco|\n");
    scanf("%d", &voto);

    while(voto != 1 && voto != 2 && voto != 3 && voto != 4 && voto != 5 && voto != 6)
    {
        printf("\nVoto Inválido! Tente novamente");
        printf("\nInforme o voto eleitor: ");
        printf("\n|1 - João | 2 - Maria | 3 - Pedro | 4 - Marcos | 5 - Nulo | 6 - Branco|\n");
        scanf("%d", &voto);
    }

    if (voto == 1)
    {
        votoJoao += 1;
    }
    if (voto == 2)
    {
        votoMaria += 1;
    }
    if (voto == 3)
    {
        votoPedro += 1;
    }
    if (voto == 4)
    {
        votoMarcos += 1;
    }
    if (voto == 5)
    {
        nulo += 1;
    }
    if (voto == 6)
    {
        branco += 1;
    }

    totalVotos += 1;
    printf("\nNovo voto? [S - Sim | N - Não]\n");
    scanf(" %c", &novoVoto);
    fflush(stdin);
}

perc_nulo = (nulo * 100.0)/totalVotos;
perc_branco = (branco * 100.0)/totalVotos;

printf("\nO total de votos para o candidato João foi %d", votoJoao);
printf("\nO total de votos para a candidata Maria foi %d", votoMaria);
printf("\nO total de votos para o candidato Pedro foi %d", votoPedro);
printf("\nO total de votos para o candidato Marcos foi %d", votoMarcos);
printf("\nO total de votos nulos foi %d", nulo);
printf("\nO total de votos brancos foi %d", branco);
printf("\nO percentual de votos nulos foi %.2f", perc_nulo);
printf("\nO percentual de votos brancos foi %.2f", perc_branco);

return 0;

}