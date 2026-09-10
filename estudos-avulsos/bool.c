#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main(){
    int n;
    bool even;

    printf("press a number: ");
    scanf("%d", &n);
    even = (n % 2 == 0);
    if(even){

        printf("%d is even", n);
                
    }else{

        printf("%d is odd", n);

    }
}