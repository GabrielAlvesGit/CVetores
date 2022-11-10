#include <stdio.h>

float nota [10];
float soma = 0;
int i;
char s;

int main(){
    

for (i = 0; i < 10; i++){
    printf("Digite seu Numero qualquer para a soma %d, Nº", (i +1));
    scanf ("%f", &nota[i]);
    soma = soma + nota[i];
}

printf("Media das 10 posições = %f \n", soma);
//printf("Digite 'S' para sair");

    return 0;
}