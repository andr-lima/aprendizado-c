#include <stdio.h>
#include <stdlib.h>

int main() {
    int escolha_de_carro, cpf;
    char nomeCliente[50];

    printf("Escolha um modelo entre esses 3:\n");
    printf("1-Civic Valor: R$100.000\n");
    printf("2-HB20 Valor: R$80.000\n");
    printf("3-Corola Valor: R$110.000\n");

    scanf("%d", &escolha_de_carro);

    if (escolha_de_carro == 1) {

        printf("\nBela escolha!\n");
        printf("Agora preciso de seus dados para cadastro:\n");

        // Limpa o ENTER que ficou depois do scanf
        while (getchar() != '\n');

        printf("Digite seu nome: ");
        fgets(nomeCliente, 50, stdin);

        printf("Digite seu cpf: ");
        scanf("%d", &cpf);

        printf("\nCadastro realizado!\n");
        printf("Nome: %s", nomeCliente);
        printf("CPF: %d\n", cpf);
    }

    return 0;
}
