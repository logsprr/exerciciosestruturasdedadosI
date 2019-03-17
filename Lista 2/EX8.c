#include<stdio.h>
#include<stdlib.h>



int main(){
    int n;
    printf("Digite o valor de N:\n");
    scanf("%d",&n);
    if(n==0 || n<0){
        int *vetor = NULL;   //ponteiro nulo
        printf("Ponteiro NUlo");
    }
    else {
        int *vetor = (int*) malloc(n*sizeof(int)); // ponteiro alocado
        printf("POnteiro alocado");
    }


}
