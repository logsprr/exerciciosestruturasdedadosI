#include <stdio.h>
#include <stdlib.h>
struct lista {
    int valor;
    struct lista *prox;
};

struct lista v1, v2, v3;

struct lista *ga = &v1;

int soma = 0;
void soma1(){
    v1.valor = 10;
    v2.valor = 20;
    v3.valor = 30;
    v1.prox = &v2;
    v2.prox = &v3;
    v3.prox = (struct lista *)0;
    
    while(ga != NULL){
        soma += ga->valor;
        ga = ga->prox;
        
    }
}
int main(){
    soma1();
    printf("soma : %d\n\n",soma);
}



