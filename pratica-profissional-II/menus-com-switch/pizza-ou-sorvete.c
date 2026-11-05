#include <stdio.h>

int main() {
    char opcao;

    printf("A - Sorvete\n");
    printf("B - Pizza\n");
    printf("Digite o que deseja comer: ");
    scanf(" %c", &opcao);

    if (opcao == 'A' || opcao == 'a') {

        printf("A - Baunilha\n");
        printf("B - Chocolate\n");
        printf("C - Flocos\n");

        printf("Escolha um sabor de Sorvete: ");
        scanf(" %c", &opcao);

        switch (opcao) {
            case 'a':
            case 'A':
                printf("Voce escolheu Baunilha");
                break;

            case 'b':
            case 'B':
                printf("Voce escolheu Chocolate");
                break;

            case 'c':
            case 'C':
                printf("Voce escolheu Flocos");
                break;

            default:
                printf("Digite um Valor Valido");
                break;
        }
    } else if(opcao == 'B' || opcao == 'b'){

        printf("A - Frango com Catupiry \n");
        printf("B - Portuguesa \n");
        printf("C - Calabresa \n");

        printf("Escolha um sabor de Pizza: ");
        scanf(" %c", &opcao);
        
            switch (opcao)
            {
            case 'A':
            case 'a':
                printf("Voce escolheu Pizza sabor Frago com Catupiry");
                break;
    
            case 'B':
            case 'b':
                printf("Voce escolheu Pizza sabor Portuguesa");
                break;

            case 'C':
            case 'c':
                printf("Voce escolheu Pizza sabor Calabresa");
                break;

            default:
                printf("Digite um Valor Valido");
                break;
        }
    }else{
        printf("Digite um Valor Valido");
    }
    return 0;
}