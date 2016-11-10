
#include <stdio.h>
#define MAXPILHA 2000//tamanho maximo da pilha
typedef float DADO; // muda o tipo da PILHA aqui
typedef struct Pilha_{
int idtopo;
DADO dados[MAXPILHA];
}Pilha;
void push (Pilha * ppilha, DADO elemento);
void pop (Pilha * ppilha);
DADO top (Pilha pilha);
int empty (Pilha pilha);
int main (){

Pilha pilha;
int i;
float numero;
pilha.idtopo=-1; //Pilha vazia
//PROGRAMA
printf("Digite os  numeros:\n");
do{
        scanf("%f", &numero);
        if (numero<0)
            break;
        else
        push (&pilha, numero); // testa push

}while(1);
while(!empty(pilha)){ // testa EMPTY
    printf ("%g, ", top (pilha)); //testa top;
    pop(&pilha);//testa POP;
}
return 0;}
void push (Pilha * ppilha, DADO elemento)
{
    if (ppilha->idtopo+1< MAXPILHA)
        {
            ppilha->idtopo++;
            ppilha->dados[ppilha->idtopo]=elemento;
        }
    else
    fprintf(stderr, "\nERRO:::: estouro de pilha!\n");
}
void pop (Pilha * ppilha)
{
    if (ppilha->idtopo>=0)
    {
        ppilha->dados[ppilha->idtopo]=0x0;//"opcional,limpa" elemento
        ppilha->idtopo--;

    }
    else
        fprintf(stdout, "WARNING: a pilha esta vazia!\n");
}
DADO top (Pilha pilha){
return pilha.dados[pilha.idtopo]; }
int empty (Pilha pilha)
{
return (pilha.idtopo==-1);
}
