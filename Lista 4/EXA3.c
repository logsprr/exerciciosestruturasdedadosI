#include <stdio.h>
#include <stdlib.h>
#define m 5
struct lista {
    int valor;
    struct lista *prox;
};

struct lista2 {
    int valor1;
    struct lista2 *prox1;
};
struct lista v[m];

struct lista2 p[m];

struct lista *ga = &v[0];

struct lista2 *ga2 = &p[0];

int i;

void passagem(){
    for(i=0;i<m;i++){
        scanf("%d",v[i].valor);
        v[i].prox = p[i].prox1;
    }
    for (i=0; i<m; i++) {
        if (i==4) {
            v[i].prox = NULL;
            p[i].prox1 = NULL;
        }
        else{
            v[i].prox = &v[i]+1;
            p[i].prox1 = &p[i]+1;
        }
    }
    while(ga != NULL){
        ga = ga->prox;
        ga2 = ga2->prox1;
    }
}
int main(){
    passagem();
    printf("Lista 1: \n", ga->valor);
    printf("Lista 2: \n", ga2->valor1);
}


