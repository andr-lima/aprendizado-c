#include <stdio.h>

int main(){
    int  i = 0;
    float nota,soma;

    do{
        printf("Digite uma nota: \n");
        scanf("%f", &nota);
        if(nota > -1){
            i++;
            soma = soma + nota;
        }else{
            break;
        }
    }  while(nota > -1);
    printf("A Media e: %.2f\n", soma / i);

    return 0;
}