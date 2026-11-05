#include <stdio.h>

int main(){
    int n, i = 1, soma = 0;

    printf("Digite n: ");
    scanf("%d", &n);

    while(i <= n){
        soma = soma + i;

        i++;
    }
    printf("Soma = %d\n", soma);
    return 0;

}