#include <stdio.h>

int main(){
    int  i = 0;
    float nota,soma = 0;

    printf("Digite uma nota (digite -1 para encerrar a contagem): \n");
    scanf("%f", &nota);

    while(nota > -1){
        
        soma = soma + nota;
        printf("Digite uma nota: \n");
        scanf("%f", &nota);
        i++;
    }

    printf("A Media e: %.2f", soma / i);


}