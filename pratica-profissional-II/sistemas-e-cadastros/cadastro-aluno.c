#include <stdio.h>
#include <string.h>

int main(){
    char nome[100];

    printf("Digite o nome do Aluno(a)");
    fgets(nome, 100, stdin);
    nome[strcspn(nome, "/n")] = '/0';

    printf("O nome do Aluno(a) digitado foi: ");


}