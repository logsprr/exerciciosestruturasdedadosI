#include <stdio.h>
#include <stdlib.h>
#define m 5
struct lista {
    int valor;
    struct lista *prox;
};

struct lista v[m];

struct lista *ga = &v[m];
int i;
int soma = 0;
int media = 0;
void soma1(){
    for(i=0;i<m;i++){
        scanf("%d",&v[i].valor);
    }
    for (i=0; i<m; i++) {
        v[m].prox = &v[m]+1;
    }
    while(ga != NULL){
        soma += ga->valor;
        ga = ga->prox;
        
    }
}
int main(){
    soma1();
    printf("soma : %d\n\n",soma/m);
}



