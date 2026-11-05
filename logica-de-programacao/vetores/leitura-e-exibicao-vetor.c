#include <stdio.h>

int main(){
    int v[5],i;

    for (i = 0; i < 5; i++) {
        printf("Valor da posicao %d: ", i);
        scanf("%d", &v[i]);
    } 

    for (i = 0; i < 5; i++) {
        printf("v[%d] = %d\n", i, v[i]);
    }

    return 0;
}