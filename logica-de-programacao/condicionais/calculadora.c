#include<stdio.h>

int main(){
    float a, b, result;
    char op;

    printf("press two value: ");
    scanf("%f %f", &a, &b);

    printf("press a operation simbol: ");
    scanf(" %c", &op);

    if (op == '+'){
        result = a + b;
        printf("%.2f", result);
    } else if (op == '-'){
        result = a - b;
        printf("%.2f", result);
    } else if (op == '*'){
        result = a * b;
        printf("%.2f", result);
    } else if (op == '/'){
        result = a / b;
        printf("%.2f", result);
    }





    
}