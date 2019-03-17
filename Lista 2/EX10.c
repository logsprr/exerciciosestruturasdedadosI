#include<stdio.h>
#include<stdlib.h>
int n;
void passparametro(){
    printf("Digite os numeros:");

    int i;
    int *vetor = (int*) malloc(n*sizeof(int)); // ponteiro alocado
    for(i=0; i<n; i++){
        scanf("%d",vetor[i]);
    }

}

int main(){

    printf("Digite o valor de N:\n");
    scanf("%d",&n);
    if(n==0 || n<0){
        int *vetor = NULL;   //ponteiro nulo
        printf("Ponteiro Nulo");
    }
    else {
        passparametro();
    }


}

