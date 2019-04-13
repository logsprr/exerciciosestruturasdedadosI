#include<stdlib.h>
#include<stdio.h>
#define n 5

int main()
{
    int vetor[n];
    int media = 0;
    int i;
    int maior = 0, menor = 0;
    int percentual;
    maior = vetor;
    menor = vetor;
    printf("Digite os numeros inteiros :\n");
    for(i=0;i<n;i++){
        scanf("%d",&vetor[i]);
    }

    for(i=0;i<n;i++){
        media = media + vetor[i];
    }
    for(i=0;i<n;i++){
        if(vetor[i]>0){
            if(vetor[i]>maior){
                maior = vetor[i];
                break;
            }
            if(vetor[i]<menor){
                menor = vetor[i];
                break;
            }
        }
    }

    for(i=0;i<n;i++){
        if(vetor[i] % 2 == 0){
            percentual++;
        }

    }



    printf("Maior numero: %d\n", maior);
    printf("Menor numero: %d\n", menor);
    printf("percentual de  numeros pares: %d\n",percentual);
    printf("media dos numeros : %d\n", media/n);



}
