#include<stdlib.h>
#include<stdio.h>
#define n 2
#define g 4
#define h 6
int main()
{
    int vet10[n];
    int vet20[g];
    int vet30[h];
    int i;
    int l;
    int aux=0;
    printf("Digite o conjunto de 10 numeros: \n");
    for(i=0;i<n;i++){
        scanf("%d",&vet10[i]);
    }
    printf("Digite o conjunto de 20 numeros: \n");
    for(i=0;i<g;i++){
        scanf("%d",&vet20[i]);
    }

    for(i=0;i<n;i++)
    {
        vet30[i] = vet10[i];
        for(l=n; l<g; l++)
        {
            vet30[l] = vet20[l];
        }
    }

    printf("Numeros diferntes:\n");
    for(i=0;i<h;i++)
    {
        printf("%d \n",vet30[i]);
    }
}


//nao esta pronta
