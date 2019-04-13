#include<stdlib.h>
#include<stdio.h>
#define k 3 //pode mudar para 30
int main()
{
    int a[k];
    int b[k];
    int x;
    int i;
    int g=0;
    printf("Digite os elemntos de A:\n");

    for(i=0;i<k;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Digite os elemntos de B:\n");
    for(i=0;i<k;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("Digite o valor de X:\n");
    scanf("%d",&x);

    for(i=0;i<k;i++)
    {
        if(a[i]==x){
            printf("Este elemento de A: %d  e igual a X: %d\n",a[i],x);
            g = i;
            break;
        }

    }

    for(i=0;i<k;i++){
        if(g==i){
            printf("O elemento B : %d corresponde ao elemento de A igual a X:",b[i]);
        }
    }
}
