#include <stdio.h>
#include <stdlib.h>

int main(){
    float salario, vt, vr, rendatotal;
    char nome[100], profissao[100];
    int cpf,telefone;
    printf("Para o cadastro precisamos de alguns dados.\n");
    printf("Digite o Telefone: ");
    scanf(" %d", &telefone);    
    printf("Digite seu cpf: ");
    scanf(" %d", &cpf);
    printf("Digite o nome completo: ");
    scanf(" %[^\n]", nome);

    printf("Digite sua Profissão: ");
    scanf("%s", &profissao);
    
    system("clean");

    printf("Telefone: %d\n", telefone);
    printf("CPF: %d\n", cpf);
    printf("Nome Completo: %s\n", nome);
    printf("Profissão: %s\n", profissao);

    printf("\n\nAgora o cadastro Salarial.");
    printf("Qual o seu Sálario, VT, VR: ");
    scanf("%f %f %f", &salario, &vt, &vr);
    rendatotal = salario + vt + vr;

    system("clean");

    if (rendatotal < 1600){
        rendatotal + 200;
    }
    
    printf("Telefone: %d", telefone);
    printf("CPF: %d", cpf);
    printf("Nome Completo: %s", nome);
    printf("Profissão: %s", profissao);
    printf("Sálario: %.2f",salario);
    printf("VT: %.2f", vt);
    printf("VR: %.2f", vr);
    printf("Renda Total: %.2f", rendatotal);
}