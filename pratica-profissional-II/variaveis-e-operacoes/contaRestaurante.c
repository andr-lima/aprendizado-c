#include<stdio.h>
#include<stdlib.h>

int main(){

    float valor_comida;
    float valor_bebida;
    float taxa;
    float total;
    float total_taxa;

    system("cls");

    printf("digite o valor da comida: ");
    scanf("%f", &valor_comida);

    printf("digite o valor da bebida: ");
    scanf("%f", &valor_bebida);

    total = valor_comida + valor_bebida;
    taxa = (valor_comida + valor_bebida) * 0.1;
    total_taxa = total + taxa;


    printf("comida: %.2f\n", valor_comida);
    printf("bedida: %.2f\n", valor_bebida );
    printf("total: %.2f\n", valor_comida + valor_bebida);
    printf("total + taxa: %.2f\n", total_taxa);

}