#include <stdio.h>
int main ()
{
    int num, i, fat;
    printf("Digite um numero: ");
    scanf("%d", &num);
    fat=1;
    for (i=1; i<=num;i++)
        fat=fat*i;
        printf("O fatorial de %d e igual a %d.\n", num, fat);
    return 0;
}
