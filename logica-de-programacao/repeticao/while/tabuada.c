#include <stdio.h>

int main(){
    int i = 1,valor;
    
    printf("Digite um valor:");
    scanf("%d", &valor);

    while (i <=10){
        printf("A tabuada de %d e %d\n", valor, valor * i);

        i++;

    }
    
}