#include <stdio.h>

int main(){
    int n, i = 1;

    printf("Digite um valor: \n");
    scanf("%d",&n);
    while(i <= n){

        i = i * (i+1);
        i++;

    }
    printf("o fatorial de %d e %d", n, i);

}