#include <stdio.h>

float somar(float n1, float n2) {
    return n1 + n2;
}
float subtrair(float n1, float n2){
    return n1 - n2;
}
float multiplicar(float n1, float n2){
    return n1 * n2;
}
float dividir( float n1, float n2){
    return n1 / n2;
}
int main(){
    float n1, n2, resultado;
    int op;

    printf("=== CALCULADORA ===\n");
    printf("Primeiro número: ");
    scanf("%f", &n1);
    printf("\n1 - Somar\n2 - Subtrair\n3 - Multiplicar\n4 - Dividir\n");
    printf("Opção: ");
    scanf("%d", &op);
    printf("Segundo numero: ");
    scanf("%f", &n2);

    switch(op){
    case 1: 
        resultado = somar(n1,n2);
        printf("resultado = %.2f\n", resultado);
        break;
    

    case 2: 
        resultado = subtrair(n1,n2);
        printf("resultado = %.2f\n", resultado);
        break;

    case 3: 
        resultado = multiplicar(n1,n2);
        printf("resultado = %.2f\n", resultado);
        break;
    
    case 4: 
        resultado = dividir(n1,n2);
        printf("resultado = %.2f\n", resultado);
        break;
    
    default:
        printf("opcao invalida!\n");
    }

    return 0;

}