#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main(){

    int idade;
    float altura;
    char nome[50];

    printf("digite sua idade: ");
    scanf("%d", &idade);

    printf("digite sua altura: ");
    scanf("%f", &altura);

    printf("digite seu nome: ");
    scanf("%s", &nome);

    system("cls");

    printf("idade: %d\n", idade);
    printf("altura : %.2f\n", altura);
    printf("nome: %s\n", nome);
}