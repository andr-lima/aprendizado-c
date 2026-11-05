#include <stdio.h>

int main(){
    int i;
    float nota[5], somatoria = 0, media;

    for (i = 0; i < 5; i++) {
        printf("Digite a nota %d: ", i);
        scanf("%f", &nota[i]);
        if(nota[i] < 0 || nota[i] > 10){
            printf("Digite uma nota valida\n");
            i--;

        }
    } 

    for (i = 0; i < 5; i++) {
        printf("nota[%d] = %.2f\n", i, nota[i]);
        somatoria += nota[i];
    }
    media =  somatoria / i;
    printf("A media da turma foi: %.2f", media);

    return 0;

}
