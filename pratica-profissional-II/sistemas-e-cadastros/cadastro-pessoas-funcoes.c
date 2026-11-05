#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cadastrar(char nome[], char telefone[], char endereco[]){
    printf("=== CADASTRO ===\n");
    printf("Nome: ");
    fgets(nome, 50, stdin);
    nome[strcspn(nome, "\n")] = '\0';

    printf("Telefone: ");
    fgets(telefone, 20, stdin);
    telefone[strcspn(telefone, "\n")] = '\0';

    printf("Endereco: ");
    fgets(endereco, 100, stdin);
    endereco[strcspn(endereco, "\n")] = '\0';
}

void imprimir(char nome[], char telefone[], char endereco[]){
    printf("=== DADOS CADASTRADOS ===\n");
    printf("Nome.....: %s\n", nome);
    printf("Telefone.: %s\n", telefone);
    printf("Endereço.: %s\n", endereco);

}
int main(){
    char nome[50];
    char telefone[20];
    char endereco[100];
    cadastrar(nome, telefone, endereco);
    system("clear");
    imprimir(nome, telefone, endereco);
    
    return 0;
}