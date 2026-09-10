#include <stdio.h>
#include <stdlib.h>

int main(){
    float valor, desconto;

    printf("Digite um valor: ");
    scanf("%f", &valor);

    if(valor <= 50.00){
        printf("Sem desconto");
    } else if(valor <= 150.00){
        valor = valor -(0.05 * valor) ;
        printf("Desconto de R$%.2f", valor);
    }else if(valor <= 300.00){
        valor = valor - (0.10 * valor);
        printf("Desconto de R$%.2f", valor);
    }else if(valor > 300.00){
        valor = valor - (0.15 * valor);
        printf("Desconto de R$%.2f", valor);
    }
}
