#include <stdio.h>
#include <ctype.h>
int main (){
    char oracao[256];
    char olheiro;
    int indice=0;
    printf("Digite uma oracao: ");
    gets(oracao);
    olheiro = oracao[indice];
    while (olheiro!='\0')
    {
        oracao[indice]=toupper(olheiro);
        indice++;
        olheiro=oracao[indice];
    }
    printf("%s \n", oracao);
    return 0;
}

