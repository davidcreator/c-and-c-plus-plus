#include <stdio.h>

float votoJoao = 0.0, votoMaria = 0.0, votoMarcos = 0.0, votoBranco = 0.0, votoNulo = 0.0, totalVoto = 0.0;

void montarTela() {
    int voto;
    do {
        printf("\n--------------------------------------");
        printf("\n| E L E I Ç Ã O ? sistema de votação |");
        printf("\n--------------------------------------");
        printf("\n1. Votar em João");
        printf("\n2. Votar em Maria");
        printf("\n3. Votar em Marcos");
        printf("\n4. Votar em branco");
        printf("\n5. Anular o voto");
        printf("\n6. Finalizar a votação");
        printf("\nVoto: ");
        scanf("%d", &voto);
        computarVoto(voto);
        limpa();
    } while(voto != 6);
    apurarEleicao(votoJoao, votoMaria, votoMarcos, votoNulo, votoBranco, totalVoto);
}

void computarVoto(int voto) {
    switch(voto) {
        case 1:
            votoJoao += 1;
            break;
        case 2:
            votoMaria += 1;
            break;
        case 3:
            votoMarcos += 1;
            break;
        case 4:
            votoBranco += 1;
            break;
        case 5:
            votoNulo += 1;
            break;
        default:
            printf("Erro: Opção inválida\n");
    }
    totalVoto += 1;
}

void apurarEleicao(float votoJ, float votoMa, float votoMo, float votoN, float votoB, float totalV) {
    float percJ, percMa, percMo, percN, percB;
    percJ = (votoJ * 100)/totalV;
    percMa = (votoMa * 100)/totalV;
    percMo = (votoMo * 100)/totalV;
    percN = (votoN * 100)/totalV;
    percB = (votoB * 100)/totalV;
    printf("\n-----------------------------------");
    printf("\n| E L E I Ç Ã O ? resultado final |");
    printf("\n-----------------------------------");
    printf("\nJoão: %.2f (%.2f%%) votos", votoJ, percJ);
    printf("\nMaria: %.2f (%.2f%%) votos", votoMa, percMa);
    printf("\nMarcos: %.2f (%.2f%%) votos", votoMo, percMo);
    printf("\nNulos: %.2f (%.2f%%) votos", votoN, percN);
    printf("\nBrancos: %.2f (%.2f%%) votos", votoB, percB);
    printf("\nTotal de votos: %.2f votos", totalV);
}

int main() {
    montarTela();
    return 0;
}