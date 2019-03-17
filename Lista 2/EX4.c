#include<stdlib.h>
#include<stdio.h>

int *vetor;
int TAM;

void alocavalor(){
    *vetor = (int*)malloc(TAM*sizeof(int));
    if(vetor == NULL){
        printf("Memoria insuficiente");
    }
    int i;
    printf("Digite os dados do vetor:");
    for(i=0;i<TAM;i++){
        printf("%d :\n",i++);
        scanf("%d",&vetor[i]);

    }

}


void imprimevetor(){
    int i;
    for(i=0;i<TAM;i++){
        printf("%d valor: %d",i++,vetor[i]);
    }


}
int main(){
    alocavalor();


}
