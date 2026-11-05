#include<stdio.h>
#include<stdlib.h>

int main(){
    char sabor;

    printf("a - Baunilha \n");
    printf("b - Chocolate \n");
    printf("c - Flocos \n");
    printf("e - Morango \n");
    printf("f - Napolitano \n");

    printf("escolha um sabor: ");
    scanf("%c", &sabor);

    switch(sabor){
        case 'a' :
        case 'A' :
            printf("Voce escolheu Baunilha");
            break;

        case 'b' :
        case 'B' :
            printf("Voce escolheu Chocolate");
            break;

        case 'c' :
        case 'C' :
            printf("Voce escolheu Flocos");
            break;

        case 'd':
        case 'D':
            printf("Voce escolheu Morango");
            break;

        case 'e':
        case 'E':
            printf("Voce escpçheu Napolitano");
            break;
        
        default:
            printf("Digite um valor valido");

    }


}