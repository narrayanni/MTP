#include <stdio.h>
#include <time.h>
#include <stdlib.h>


void sorteio(int numero);

int main(){
    srand(time(0));
    int numero;
    printf("Digite um numero entre 1 e 10:\n");
    scanf("%d", &numero);
    sorteio(numero);
    return 0;
}

void sorteio(int numero){
    int resultado, i;
    for(i = 1; i <= 10; i++)
       valor = rand()%10 + 1;
    if(num == resultado)
        printf("Parabens seu numero foi sorteado!\n");
        else
            printf("Numero sorteado: %d", valor);
}
