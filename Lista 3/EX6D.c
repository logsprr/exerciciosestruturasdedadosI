#include <stdio.h>
#include<stdlib.h>

int fat(int n)
{
    if(n>0)
    {
        return n*fat(n-1);
    }
    else
    {
        return 1;
    }
}
int main ()
{
    int n, fat2;

    printf("Digite n:\n");
    scanf("%d", &n);

    fat2 = fat(2*n)/fat(n);

    printf("Fatorial 4druplo de %d eh: %d", n, fat2);
}
