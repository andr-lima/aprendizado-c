#include <stdio.h>

int main(){
    int fat = 1, n;

    printf("Digite um numero: ");
    scanf("%d", &n);
    for(int i = 1; i <= n;i++){
        fat = fat * i;


    }
    printf("fat = %d", fat);
}