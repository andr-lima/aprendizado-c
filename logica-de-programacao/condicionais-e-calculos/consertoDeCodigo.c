#include<stdio.h>

int main(){
    float nota;
    printf("Digite a nota:");
    scanf("%f", &nota);
    if(nota >= 9){
        printf("Excelente: %.1f\n", nota);
    } else if (nota >= 7){
        printf("bom\n");
    } else {
        printf("Reprovado\n");
    }
    
    return 0;
    

}