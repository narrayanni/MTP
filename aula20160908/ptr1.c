#include <stdio.h>
#include <stdlib.h>
int main () {
    unsigned int numero= 0xFACA8421;
    unsigned char *p= NULL, *q;
    printf("%p: %u\n", &numero, numero);
    p=q=(unsigned char*)& numero;
   for(;p<q+ sizeof(int);p++)
        printf("%p: %X\n", p, *p);
return 0;}
