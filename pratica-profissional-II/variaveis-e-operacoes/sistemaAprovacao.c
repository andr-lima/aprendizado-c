#include<stdio.h>
#include<stdlib.h>

int main(){

    float nota1;
    float nota2;
    float media;

    printf("digite sua nota do primeiro bimestre: ");
    scanf("%f", &nota1);

    printf("digite sua nota do segundo bimestre: ");
    scanf("%f", &nota2);

    // invalida notas menores que 0 e , maiores que 10;
    if(nota1 || nota2 < 0){

        system("cls");

        printf("digite uma nota valida");
        return 0;

    }else if(nota1 || nota2 > 10 ){

        system("cls");

        printf("digite uma nota valida");
        return 0;
    }
    

    system("cls");
    
    media = (nota1 + nota2) / 2 ;

    // sistema de aprovação e reprovação e arredondando notas acima de 6.74;
     if(media >= 7){

        printf("Sua nota foi %f entao esta Aprovado", media);
        
    }else if( 7 - media <= 0.25){

        printf("Sua nota foi %f nao deveria mas esta aprovado, estude mais da proxima vez", media);

    }else{

        printf("Sua nota foi %f entao esta Reprovado", media);

    }
}