#include<stdio.h>
#include<stdlib.h>

int main(){
    int age;

    printf("press your age: ");
    scanf("%d", &age);
    if (age <= 0){
        printf("nice fetinho");
    }else if (age <= 12){
        printf("kid");
    } else if (age <= 17){
        printf("young");
    } else if (age <= 59){
        printf("adulto");
    } else {
        printf("old");
    }
    return 0;

}