#include<stdio.h>
#include<stdlib.h>

int main(){
    int a, b, c;

    printf("pres three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c){
        printf("Maior: %d\n", a);
    } else if(b>= a && b >= c){
        printf("Maior: %d\n", b);
    }


}