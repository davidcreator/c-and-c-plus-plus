<<<<<<< HEAD
#include <stdio.h>
#include <string.h>

const int senha = 12345;
const char acesso[] = "acesso";

void limpa() {
    system("clear"); //ou system("cls"); para Windows
}

void logarSistema() {
    int password;
    char login[100];
    printf("Informe o login: ");
    scanf("%s", login);
    printf("\nInforme o password: ");
    scanf("%d", &password);

    while (senha != password || strcmp(acesso, login) != 0) {
        printf("\nLogin ou password errado, tente novamente!\n");
        printf("Informe o login: ");
        scanf("%s", login);
        printf("\nInforme o password: ");
        scanf("%d", &password);
    }

    limpa();
    cadastro();
}

void cadastro() {
    char nome[100], cargo1[100], cidade_atuacao1[100];
    int cidade_atuacao, nro_filhos, plano_saude, vale_transporte, cargo;
    float sal_bruto, T_Alimentacao, A_Creche = 0, V_Transporte, P_Saude, Periculosidade, INSS;

    printf("##################################################################################\n");
    printf("#                 CADASTRO PESSOAL (RH da Engex Engenharia)                      #\n");
    printf("##################################################################################\n");
    printf("# Nome: ");
    scanf("%s", nome);
    printf("# Cidade de atuação [1-São João dos Patos | 2-Asa Dourada | 3-Lago do Pato Feio]: ");
    scanf("%d", &cidade_atuacao);
    printf("# Número de filhos: ");
    scanf("%d", &nro_filhos);
    printf("# Plano de saúde [1 - Sim | 2 - Não]: ");
    scanf("%d", &plano_saude);
    printf("# Vale transporte [1 - Sim | 2 - Não]: ");
    scanf("%d", &vale_transporte);
    printf("# Cargo [1 - Engenheiro | 2 - Mestre de obras | 3 - Pedreiro]: ");
    scanf("%d", &cargo);
    limpa();

    if (cidade_atuacao == 1) {
        strcpy(cidade_atuacao1, "São João dos Patos");
    } else if (cidade_atuacao == 2) {
        strcpy(cidade_atuacao1, "Asa Dourada");
    } else {
        strcpy(cidade_atuacao1, "Lago do Pato Feio");
    }

    if (cargo == 1) {
        sal_bruto = 10000;
        strcpy(cargo1, "Engenheiro");
        Periculosidade = 0;
        INSS = sal_bruto * 0.11;
    } else if (cargo == 2) {
        sal_bruto = 2500;
        strcpy(cargo1, "Mestre de obras");
        Periculosidade = sal_bruto * 0.10;
        INSS = sal_bruto * 0.11;
    } else {
        sal_bruto = 1500;
        strcpy(cargo1, "Pedreiro");
        Periculosidade = sal_bruto * 0.10;
        INSS = sal_bruto * 0.11;
    }

    T_Alimentacao = sal_bruto * 0.11;

    switch(nro_filhos){
    case 0:
        A_Creche = 0;
        break;
    case 1:
        A_Creche = sal_bruto * 0.05;
        break;
    case 2:
        A_Creche = (sal_bruto * 0.05) * 2;
        break;
    case 3:
        A_Creche = (sal_bruto * 0.05) * 3;
        break;
    case 4:
        A_Creche = (sal_bruto * 0.05) * 4;
        break;
    case 5:
        A_Creche = (sal_bruto * 0.05) * 5;
        break;
    default:
        printf("ERRO!");
        break;
}

if (vale_transporte == 1) {
    V_Transporte = sal_bruto * 0.10;
} else {
    V_Transporte = 0;
}
if (plano_saude == 1) {
    P_Saude = 400;
} else {
    P_Saude = 0;
}
montarTela(nome, cargo1, cidade_atuacao1, sal_bruto, A_Creche, Periculosidade, P_Saude, T_Alimentacao, INSS, V_Transporte);

funcao montarTela(cadeia nome, cadeia cargo1, cadeia cidade_atuacao1,real sal_bruto,real A_Creche,real Periculosidade,real P_Saude,real T_Alimentacao,real INSS,real V_Transporte){
		real Acrescimo=0, Desconto=0
		escreva("##################################################################################\n")
		escreva("#                 CADASTRO PESSOAL (RH da Engex Engenharia)                      #\n")
		escreva("##################################################################################\n")
		escreva("# Nome: ",nome)
		escreva("\n# Cargo: ",cargo1)
		escreva("\n# Cidade de atuação: ",cidade_atuacao1)
		escreva("\n# Salário bruto: R$ ",sal_bruto)
		escreva("\n# Acréscimo: ")
		se(A_Creche > 0){
			escreva("\n# Auxilio Creche: R$ ",A_Creche)
			}
		se(Periculosidade > 0){
			escreva("\n# Periculosidade: R$ ",Periculosidade)
			}
		se(P_Saude > 0){
			escreva("\n# Plano de Saúde: R$ ",P_Saude)
			}
		se(A_Creche == 0 e Periculosidade == 0 e P_Saude == 0){
			escreva("\n# Funcionário sem acréscimo")
			}senao{
				escreva("\n# Total de acrescimos: R$ ",Acrescimo = A_Creche + Periculosidade + P_Saude)
				}
		escreva("\n# Descontos: ")
		escreva("\n# Ticket Alimentação: R$ ",T_Alimentacao)
		escreva("\n# INSS: R$ ",INSS)		
		se(V_Transporte > 0){
			escreva("\n# Vale Transporte: R$ ",V_Transporte)
			}
		escreva("\n# Total de descontos: R$ ",Desconto = T_Alimentacao + INSS + V_Transporte)
		escreva("\n# Salário Líquido: R$ ", sal_bruto+Acrescimo-Desconto)
		}
=======
#include <stdio.h>
#include <string.h>

const int senha = 12345;
const char acesso[] = "acesso";

void limpa() {
    system("clear"); //ou system("cls"); para Windows
}

void logarSistema() {
    int password;
    char login[100];
    printf("Informe o login: ");
    scanf("%s", login);
    printf("\nInforme o password: ");
    scanf("%d", &password);

    while (senha != password || strcmp(acesso, login) != 0) {
        printf("\nLogin ou password errado, tente novamente!\n");
        printf("Informe o login: ");
        scanf("%s", login);
        printf("\nInforme o password: ");
        scanf("%d", &password);
    }

    limpa();
    cadastro();
}

void cadastro() {
    char nome[100], cargo1[100], cidade_atuacao1[100];
    int cidade_atuacao, nro_filhos, plano_saude, vale_transporte, cargo;
    float sal_bruto, T_Alimentacao, A_Creche = 0, V_Transporte, P_Saude, Periculosidade, INSS;

    printf("##################################################################################\n");
    printf("#                 CADASTRO PESSOAL (RH da Engex Engenharia)                      #\n");
    printf("##################################################################################\n");
    printf("# Nome: ");
    scanf("%s", nome);
    printf("# Cidade de atuação [1-São João dos Patos | 2-Asa Dourada | 3-Lago do Pato Feio]: ");
    scanf("%d", &cidade_atuacao);
    printf("# Número de filhos: ");
    scanf("%d", &nro_filhos);
    printf("# Plano de saúde [1 - Sim | 2 - Não]: ");
    scanf("%d", &plano_saude);
    printf("# Vale transporte [1 - Sim | 2 - Não]: ");
    scanf("%d", &vale_transporte);
    printf("# Cargo [1 - Engenheiro | 2 - Mestre de obras | 3 - Pedreiro]: ");
    scanf("%d", &cargo);
    limpa();

    if (cidade_atuacao == 1) {
        strcpy(cidade_atuacao1, "São João dos Patos");
    } else if (cidade_atuacao == 2) {
        strcpy(cidade_atuacao1, "Asa Dourada");
    } else {
        strcpy(cidade_atuacao1, "Lago do Pato Feio");
    }

    if (cargo == 1) {
        sal_bruto = 10000;
        strcpy(cargo1, "Engenheiro");
        Periculosidade = 0;
        INSS = sal_bruto * 0.11;
    } else if (cargo == 2) {
        sal_bruto = 2500;
        strcpy(cargo1, "Mestre de obras");
        Periculosidade = sal_bruto * 0.10;
        INSS = sal_bruto * 0.11;
    } else {
        sal_bruto = 1500;
        strcpy(cargo1, "Pedreiro");
        Periculosidade = sal_bruto * 0.10;
        INSS = sal_bruto * 0.11;
    }

    T_Alimentacao = sal_bruto * 0.11;

    switch(nro_filhos){
    case 0:
        A_Creche = 0;
        break;
    case 1:
        A_Creche = sal_bruto * 0.05;
        break;
    case 2:
        A_Creche = (sal_bruto * 0.05) * 2;
        break;
    case 3:
        A_Creche = (sal_bruto * 0.05) * 3;
        break;
    case 4:
        A_Creche = (sal_bruto * 0.05) * 4;
        break;
    case 5:
        A_Creche = (sal_bruto * 0.05) * 5;
        break;
    default:
        printf("ERRO!");
        break;
}

if (vale_transporte == 1) {
    V_Transporte = sal_bruto * 0.10;
} else {
    V_Transporte = 0;
}
if (plano_saude == 1) {
    P_Saude = 400;
} else {
    P_Saude = 0;
}
montarTela(nome, cargo1, cidade_atuacao1, sal_bruto, A_Creche, Periculosidade, P_Saude, T_Alimentacao, INSS, V_Transporte);

funcao montarTela(cadeia nome, cadeia cargo1, cadeia cidade_atuacao1,real sal_bruto,real A_Creche,real Periculosidade,real P_Saude,real T_Alimentacao,real INSS,real V_Transporte){
		real Acrescimo=0, Desconto=0
		escreva("##################################################################################\n")
		escreva("#                 CADASTRO PESSOAL (RH da Engex Engenharia)                      #\n")
		escreva("##################################################################################\n")
		escreva("# Nome: ",nome)
		escreva("\n# Cargo: ",cargo1)
		escreva("\n# Cidade de atuação: ",cidade_atuacao1)
		escreva("\n# Salário bruto: R$ ",sal_bruto)
		escreva("\n# Acréscimo: ")
		se(A_Creche > 0){
			escreva("\n# Auxilio Creche: R$ ",A_Creche)
			}
		se(Periculosidade > 0){
			escreva("\n# Periculosidade: R$ ",Periculosidade)
			}
		se(P_Saude > 0){
			escreva("\n# Plano de Saúde: R$ ",P_Saude)
			}
		se(A_Creche == 0 e Periculosidade == 0 e P_Saude == 0){
			escreva("\n# Funcionário sem acréscimo")
			}senao{
				escreva("\n# Total de acrescimos: R$ ",Acrescimo = A_Creche + Periculosidade + P_Saude)
				}
		escreva("\n# Descontos: ")
		escreva("\n# Ticket Alimentação: R$ ",T_Alimentacao)
		escreva("\n# INSS: R$ ",INSS)		
		se(V_Transporte > 0){
			escreva("\n# Vale Transporte: R$ ",V_Transporte)
			}
		escreva("\n# Total de descontos: R$ ",Desconto = T_Alimentacao + INSS + V_Transporte)
		escreva("\n# Salário Líquido: R$ ", sal_bruto+Acrescimo-Desconto)
		}
>>>>>>> 0022760d633179861383ecd64ba21a7ac7149f23
}