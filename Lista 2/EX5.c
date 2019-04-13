#include<stdlib.h>
#include<stdio.h>



void len(int N){
    printf("Digite o valor de N:\n");
    scanf("%d",&N);
    while(N<0){
        printf("Digite outro valor:");
        scanf("%d",&N);

    }
    int *vetor = (int*) malloc(N*sizeof(int));
    printf("Digite os valores do vetor, maior que 2:\n");
    int i;
    //le os valores do vetor
    for(i=0;i<N;i++){
        scanf("%d",vetor[i]);
        if(vetor[i]<2){
            printf("Digite outro valor");
            scanf("%d",vetor[i]);
        }
    }
    //imprime os valores alocados
    for(i=0;i<N;i++){
        printf("%d",vetor[i]);
    }
}


int main()
{
    len(0);

}
