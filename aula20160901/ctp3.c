#include <stdio.h>
#include <ctype.h>
int main (){
    char oracao[256];
    char olheiro;
    int indice=0;
    int cont=0;
    printf("Digite uma oracao: ");
    gets(oracao);
    olheiro= oracao[indice];
    while (olheiro!='\0')
    {
        if (olheiro!=' ')
            cont++;
        indice++;
        olheiro=oracao[indice];
    }
    printf("O numero de letras e': %d\n", cont);
    return 0;
}
