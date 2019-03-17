#include<stdlib.h>
#include<stdio.h>

int **matrint;
int n;
void matriz(){

    printf("Digite o tamanho da matriz:\n");
    scanf("%d",&n);

    **matrint = (int **) malloc(n*sizeof(int*));


    int i;
    int j;
    for(i=0;i<n;i++){
        matrint[i] = (int*) malloc(n*sizeof(int));
        for(j=0;j<n;j++){
            scanf("%d",&matrint[i][j]);
        }

    }

}

void verifica(){
    int p;
    printf("Digite um numero qualuqer:\n");
    scanf("%d",&p);
    int i;
    int j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(p==matrint[i][j]){
                return 1;
            }
            else
                return 0;
        }

    }

}


int main(){

    matriz();
    verifica();

}
