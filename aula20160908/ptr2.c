
#include <stdio.h>
#include <stdlib.h>
int main () {
    int vetor[] = {0,1,2,4,8};
    int cont=0;
    unsigned char *p= NULL, *q;
    p=q=(unsigned char*) vetor;
   for(;p<q+sizeof (vetor);p++){
   if (*p==0x0)
    cont++;
    printf("%p: %X\n", p, *p);
   }
   printf("O numero de bytes apenasn com 0's: %d\n", cont);

return 0;}
