#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(){
    int escolha_de_carro;
    char nomeCliente[50], cpf[11];
   

    printf("Escolha um modelo entre esses 3:  \n");
    printf("1-Civic Valor: R$100.000\n");
    printf("2-HB20 Valor: R$80.000\n");
    printf("3-Corolla Valor: R$110.000\n");
    scanf("%d", &escolha_de_carro);

    if (escolha_de_carro == 1){

        printf("Bela escolha\n");
        printf("Agora preciso de seus dados para cadastro: \n");
        printf("Digite seu nome: \n");
        scanf(" %[^\n]", &nomeCliente);
        
        printf("Digite seu cpf: ");
        scanf("%s", &cpf);

    } else if (escolha_de_carro == 2){
         printf("Bela escolha\n");
        printf("Agora preciso de seus dados para cadastro: \n");
        printf("Digite seu nome: \n");
        scanf(" %[^\n]", &nomeCliente);
        
        printf("Digite seu cpf: ");
        scanf("%s", &cpf); 

    }else {
        
         printf("Bela escolha\n");
        printf("Agora preciso de seus dados para cadastro: \n");
        printf("Digite seu nome: \n");
        scanf(" %[^\n]", &nomeCliente);
        
        printf("Digite seu cpf: ");
        scanf("%s", &cpf);
    }
    
        printf("seu nome e: %s e seu cpf e: %s", nomeCliente, cpf);
        return 0;
}