#include <stdio.h>

int main(){
    int i, n = 0;
    printf("Digite o valor que quer a tabuda: ");
    scanf("%d", &n);
    for(i = 0; i <= 10; i++ ){
        printf("%d x %d = %d\n", n, i, n * i);


    }


}