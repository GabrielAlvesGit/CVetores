#include <stdio.h>

float nota [3];
float soma = 0;
int i;
int main(){

for (i = 0; i < 3; i++){
    printf("Entre com a %da,  nota: ", (i +1));
    scanf ("%f", &nota[i]);
    soma = soma + nota[i];
}

printf("Media da disciplina = %f", soma / 3);

    return 0;
}