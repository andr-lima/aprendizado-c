#include <stdio.h>

int main(){
    int senha,cont = 0;

    do {
        printf("Digite a senha: ");
        scanf("%d", &senha);
        if (senha != 1234){
            printf("Otario errou a senha \n");
        }
        cont += 1;
    } while (senha != 1234);

    printf("Tentativas realizadas  %d\n", cont);
    return 0;
}