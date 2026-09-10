#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int main(){
    int age;
    bool mayVote, mayDrive;

    printf("press your age: ");
    scanf("%d", &age);

    mayVote = age >= 16;
    mayDrive = age >= 18;

    if(mayDrive){
        printf("May Drive \n");
    }else {
        printf("May't Drive \n");
    }

    if(mayVote){
        printf("May Vote \n");
    }else {
        printf("May't Vote \n");
    }
 return 0;
}