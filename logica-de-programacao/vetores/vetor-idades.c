#include <stdio.h>

int main(){
    int idade[5], i;

    for(i=0;i<= 4;i++ ){
        printf("%dª idade: ", i+1);
        scanf("%d", &idade[i]);
        
    }
    
    for(i = 0; i <= 4; i++){
        printf("A idade digitada foi: %d\n", idade[i]);
    }

}