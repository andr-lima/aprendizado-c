#include <stdio.h>
#include <string.h>

int main(){
    char nome[100];

    printf("Nome do Candidato(a): ");
    fgets(nome, 100, stdin);
    
    nome[strcspn(nome, "\n")] = '\0';

    printf("Candidato(a): %s \n",nome);
    printf("Candidato(a): %s \n",nome);

}