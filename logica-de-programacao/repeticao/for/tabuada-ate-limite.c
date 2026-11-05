#include <stdio.h>

int main(){
    int i, n = 0,limite;
    printf("Digite o valor que quer a tabuda: ");
    scanf("%d", &n);
    printf("Digite ate que numero que quer que va a tabuada: ");
    scanf("%d", &limite);

    for(i = 1; i <= limite; i++ ){
        printf("%d x %d = %d\n", n, i, n * i);
        

    }


}