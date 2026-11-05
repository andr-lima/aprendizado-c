#include <stdio.h>

int main(){
    int i = 1, pares = 0;

    while(i <= 20){
        if(i % 2 == 0){
            pares++;
        }
        i++;

    }
    printf("Quantidade de pares: %d\n", pares);

    return 0;    
}