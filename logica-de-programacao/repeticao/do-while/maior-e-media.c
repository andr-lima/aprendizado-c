#include <stdio.h>

int main(){
    int n, maior, i = 0;
    float media = 0, soma = 0;
    do{
        printf("Digite um valor: ");
        scanf("%d", &n);

        soma += n;
        i++;
        if (n > maior){
            maior = n;
        }
        

    } while ( n != 0);
    i--;
    media = soma / i;
    printf("A media e %.2f", media);
    printf("\ne maior valor digitado e %d", maior);


}