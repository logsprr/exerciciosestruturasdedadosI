#include<stdlib.h>
#include<stdio.h>


int main(int n){
    printf("Digite o valor de N:\n");
    scanf("%d",&n);
    int *vetor = (int*) malloc(n*sizeof(int));
    int i;

    for(i=0;i<n;i++){
        printf("%d ", rand() % n-1);
    }

}
