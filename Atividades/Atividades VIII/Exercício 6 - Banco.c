<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LIMITE 500.0
#define SALDO_INICIAL 1500.0

struct Transacao {
    char tipo[10];
    float valor;
};

struct Conta {
    char agencia[10];
    char numero[10];
    char senha[10];
    float saldo;
    float limite;
    struct Transacao transacoes[100];
    int num_transacoes;
};

void inicializa_conta(struct Conta *conta, char *agencia, char *numero, char *senha) {
    strcpy(conta->agencia, agencia);
    strcpy(conta->numero, numero);
    strcpy(conta->senha, senha);
    conta->saldo = SALDO_INICIAL;
    conta->limite = LIMITE;
    conta->num_transacoes = 0;
}

void exibe_menu() {
    printf("\n\n");
    printf("Bem-vindo ao caixa eletronico!\n");
    printf("Escolha uma das opcoes abaixo:\n");
    printf("1 - Saldo\n");
    printf("2 - Extrato\n");
    printf("3 - Saque\n");
    printf("4 - Deposito\n");
    printf("5 - Sair\n");
}

void exibe_saldo(struct Conta *conta) {
    printf("\nSeu saldo atual eh: R$ %.2f\n", conta->saldo);
}

void exibe_extrato(struct Conta *conta) {
    printf("\nExtrato de transacoes:\n");
    for (int i = 0; i < conta->num_transacoes; i++) {
        struct Transacao t = conta->transacoes[i];
        printf("%s R$ %.2f\n", t.tipo, t.valor);
    }
}

void realiza_saque(struct Conta *conta) {
    float valor;
    printf("\nDigite o valor do saque: ");
    scanf("%f", &valor);
    if (valor > conta->saldo + conta->limite) {
        printf("\nNao ha saldo suficiente para realizar o saque.\n");
    } else {
        conta->saldo -= valor;
        struct Transacao t;
        strcpy(t.tipo, "Saque");
        t.valor = valor;
        conta->transacoes[conta->num_transacoes] = t;
        conta->num_transacoes++;
        printf("\nSaque realizado com sucesso.\n");
    }
}

void realiza_deposito(struct Conta *conta) {
    float valor;
    printf("\nDigite o valor do deposito: ");
    scanf("%f", &valor);
    conta->saldo += valor;
    struct Transacao t;
    strcpy(t.tipo, "Deposito");
    t.valor = valor;
    conta->transacoes[conta->num_transacoes] = t;
    conta->num_transacoes++;
    printf("\nDeposito realizado com sucesso.\n");
}

int main() {
    struct Conta conta;
    char agencia[10], numero[10], senha[10];
    printf("Digite o numero da agencia: ");
    scanf("%s", agencia);
    printf("Digite o numero da conta: ");
    scanf("%s", numero);
    printf("Digite a senha: ");
    scanf("%s", senha);
    inicializa_conta(&conta, agencia, numero, senha);
    int opcao;
    do {
        exibe_menu();
        printf("Opcao escolhida: ");
         scanf("%d", &opcao);
        switch (opcao) {
            case 1:
                exibe_saldo(&conta);
                break;
            case 2:
                exibe_extrato(&conta);
                break;
            case 3:
                realiza_saque(&conta);
                break;
            case 4:
                realiza_deposito(&conta);
                break;
            case 5:
                printf("\nObrigado por utilizar o caixa eletronico!\n");
                break;
            default:
                printf("\nOpcao invalida, tente novamente.\n");
        }
    } while (opcao != 5);
    return 0;
=======
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LIMITE 500.0
#define SALDO_INICIAL 1500.0

struct Transacao {
    char tipo[10];
    float valor;
};

struct Conta {
    char agencia[10];
    char numero[10];
    char senha[10];
    float saldo;
    float limite;
    struct Transacao transacoes[100];
    int num_transacoes;
};

void inicializa_conta(struct Conta *conta, char *agencia, char *numero, char *senha) {
    strcpy(conta->agencia, agencia);
    strcpy(conta->numero, numero);
    strcpy(conta->senha, senha);
    conta->saldo = SALDO_INICIAL;
    conta->limite = LIMITE;
    conta->num_transacoes = 0;
}

void exibe_menu() {
    printf("\n\n");
    printf("Bem-vindo ao caixa eletronico!\n");
    printf("Escolha uma das opcoes abaixo:\n");
    printf("1 - Saldo\n");
    printf("2 - Extrato\n");
    printf("3 - Saque\n");
    printf("4 - Deposito\n");
    printf("5 - Sair\n");
}

void exibe_saldo(struct Conta *conta) {
    printf("\nSeu saldo atual eh: R$ %.2f\n", conta->saldo);
}

void exibe_extrato(struct Conta *conta) {
    printf("\nExtrato de transacoes:\n");
    for (int i = 0; i < conta->num_transacoes; i++) {
        struct Transacao t = conta->transacoes[i];
        printf("%s R$ %.2f\n", t.tipo, t.valor);
    }
}

void realiza_saque(struct Conta *conta) {
    float valor;
    printf("\nDigite o valor do saque: ");
    scanf("%f", &valor);
    if (valor > conta->saldo + conta->limite) {
        printf("\nNao ha saldo suficiente para realizar o saque.\n");
    } else {
        conta->saldo -= valor;
        struct Transacao t;
        strcpy(t.tipo, "Saque");
        t.valor = valor;
        conta->transacoes[conta->num_transacoes] = t;
        conta->num_transacoes++;
        printf("\nSaque realizado com sucesso.\n");
    }
}

void realiza_deposito(struct Conta *conta) {
    float valor;
    printf("\nDigite o valor do deposito: ");
    scanf("%f", &valor);
    conta->saldo += valor;
    struct Transacao t;
    strcpy(t.tipo, "Deposito");
    t.valor = valor;
    conta->transacoes[conta->num_transacoes] = t;
    conta->num_transacoes++;
    printf("\nDeposito realizado com sucesso.\n");
}

int main() {
    struct Conta conta;
    char agencia[10], numero[10], senha[10];
    printf("Digite o numero da agencia: ");
    scanf("%s", agencia);
    printf("Digite o numero da conta: ");
    scanf("%s", numero);
    printf("Digite a senha: ");
    scanf("%s", senha);
    inicializa_conta(&conta, agencia, numero, senha);
    int opcao;
    do {
        exibe_menu();
        printf("Opcao escolhida: ");
         scanf("%d", &opcao);
        switch (opcao) {
            case 1:
                exibe_saldo(&conta);
                break;
            case 2:
                exibe_extrato(&conta);
                break;
            case 3:
                realiza_saque(&conta);
                break;
            case 4:
                realiza_deposito(&conta);
                break;
            case 5:
                printf("\nObrigado por utilizar o caixa eletronico!\n");
                break;
            default:
                printf("\nOpcao invalida, tente novamente.\n");
        }
    } while (opcao != 5);
    return 0;
>>>>>>> 0022760d633179861383ecd64ba21a7ac7149f23
}