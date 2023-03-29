#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define senha 12345
#define acesso "acesso"

void logarSistema();
    int main() {
    logarSistema();
  return 0;
}

void logarSistema() {
  int password;
  char login[50];

  printf("Informe o login: ");
  scanf("%s", login);
  printf("\nInforme o password: ");
  scanf("%d", & password);

  while (senha != password || strcmp(acesso, login) != 0) {
    printf("\nLogin ou password errado, tente novamente!\n");
    printf("Informe o login: ");
    scanf("%s", login);
    printf("\nInforme o password: ");
    scanf("%d", & password);
  }
  system("clear");
  cadastro();

}

void cadastro() {
  char nome[100], cargo1[20], cidade_atuacao1[30];
  int cidade_atuacao, nro_filhos, plano_saude, vale_transporte, cargo;
  float sal_bruto, T_Alimentacao, A_Creche = 0, V_Transporte, P_Saude, Periculosidade, INSS;

  printf("##################################################################################\n");
  printf("#                 CADASTRO PESSOAL (RH da Engex Engenharia)                      #\n");
  printf("##################################################################################\n");
  printf("# Nome: ");
  scanf("%s", nome);
  printf("# Cidade de atuação [1-São João dos Patos | 2-Asa Dourada | 3-Lago do Pato Feio]: ");
  scanf("%d", & cidade_atuacao);
  printf("# Número de filhos: ");
  scanf("%d", & nro_filhos);
  printf("# Plano de saúde [1 - Sim | 2 - Não]: ");
  scanf("%d", & plano_saude);
  printf("# Vale transporte [1 - Sim | 2 - Não]: ");
  scanf("%d", & vale_transporte);
  printf("# Cargo [1 - Engenheiro | 2 - Mestre de obras | 3 - Pedreiro]: ");
  scanf("%d", & cargo);
  system("clear");

  if (cidade_atuacao == 1) {
    sprintf(cidade_atuacao1, "São João dos Patos");
  } else if (cidade_atuacao == 2) {
    sprintf(cidade_atuacao1, "Asa Dourada");
  } else {
    sprintf(cidade_atuacao1, "Lago do Pato Feio");
  }

  if (cargo == 1) {
    sal_bruto = 10000;
    sprintf(cargo1, "Engenheiro");
    Periculosidade = 0;
    INSS = sal_bruto * 0.11;
  } else if (cargo == 2) {
    sal_bruto = 2500;
    sprintf(cargo1, "Mestre de obras");
    Periculosidade = sal_bruto * 0.10;
    INSS = sal_bruto * 0.11;
  } else {
    sal_bruto = 1500;
    sprintf(cargo1, "Pedreiro");
    Periculosidade = sal_bruto * 0.10;
    INSS = sal_bruto * 0.11;
  }

  T_Alimentacao = sal_bruto * 0.11;

  switch (nro_filhos) {
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
}

void montarTela(char * nome, char * cargo1, char * cidade_atuacao1, float sal_bruto, float A_Creche, float Periculosidade, float P_Saude, float T_Alimentacao, float INSS, float V_Transporte) {
  float Acrescimo = 0, Desconto = 0;
  printf("##################################################################################\n");
  printf("# CADASTRO PESSOAL (RH da Engex Engenharia) #\n");
  printf("##################################################################################\n");
  printf("# Nome: %s", nome);
  printf("\n# Cargo: %s", cargo1);
  printf("\n# Cidade de atuação: %s", cidade_atuacao1);
  printf("\n# Salário bruto: R$ %.2f", sal_bruto);
  printf("\n# Acréscimo: ");
  if (A_Creche > 0) {
    printf("\n# Auxilio Creche: R$ %.2f", A_Creche);
  }
  if (Periculosidade > 0) {
    printf("\n# Periculosidade: R$ %.2f", Periculosidade);
  }
  if (P_Saude > 0) {
    printf("\n# Plano de Saúde: R$ %.2f", P_Saude);
  }
  if (A_Creche == 0 && Periculosidade == 0 && P_Saude == 0) {
    printf("\n# Funcionário sem acréscimo");
  } else {
    printf("\n# Total de acrescimos: R$ %.2f", Acrescimo = A_Creche + Periculosidade + P_Saude);
  }
  printf("\n# Descontos: ");
  printf("\n# Ticket Alimentação: R$ %.2f", T_Alimentacao);
  printf("\n# INSS: R$ %.2f", INSS);
  if (V_Transporte > 0) {
    printf("\n# Vale Transporte: R$ %.2f", V_Transporte);
  }
  printf("\n# Total de descontos: R$ %.2f", Desconto = T_Alimentacao + INSS + V_Transporte);
  printf("\n# Salário Líquido: R$ %.2f", sal_bruto + Acrescimo - Desconto);
}