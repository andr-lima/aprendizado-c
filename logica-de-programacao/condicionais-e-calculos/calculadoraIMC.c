#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#include<math.h>

int main(){
    // setlocale(LC_ALL,"portuguese-brazilian");
    float peso, altura, imc;

    

    printf("Digite seu peso: ");
    scanf("%f", &peso);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    // imc = peso / (altura * altura);
    imc = peso /pow(altura,2);
    printf("Sua altura: %.2fM\n", altura);
    printf("Seu peso: %.2fKg\n", peso);
    printf("Seu IMC: %.2f\n", imc);
    
    if(imc < 18.5){
        printf("Abaixo do peso");
    }else if(imc <= 24.9){
        printf("Peso normal");
    }else if(imc <= 29.9){
        printf("Sobrepeso");
    }else{
        printf("Obesidade");
    }
}