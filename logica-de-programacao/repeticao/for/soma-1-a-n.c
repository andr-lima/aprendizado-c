#include <stdio.h>

int main(){
    int n,soma = 0;

    printf("Digite um numero: ");
    scanf("%d", &n);
    for(int i = 0; i<=n; i++){
        soma += i;


    }
    printf("soma = %d\n", soma);

}