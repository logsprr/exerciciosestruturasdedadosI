#include <stdio.h>
#include <stdlib.h>
#define m 5
struct lista {
    int valor;
    struct lista *prox;
};

typedef struct lista Lista1;
typedef struct lista Lista2;

Lista1 *lst_cria(void){
    return NULL;
}
Lista2 *lst_cria1(void){
    return NULL;
}
void copia(Lista1* l, Lista2* q){
    Lista2 *novo1 = (Lista2*) malloc(sizeof(Lista2));
    int j;
    for(j=0;j<m;j++){
        novo1->valor=l->valor;
    }
}

Lista1 *lst_insere (Lista1* l){
    int i;
    Lista1 *l1 = (Lista1*)malloc(sizeof(Lista1));
    for(i=0;i<m;i++){
        scanf("%d",&l1->valor);
        l1->prox;
    }
    return l1;
}
void lst_imprime(Lista1 *l, Lista2 *q){
    Lista1 *p;
    Lista2 *j;
    for(p=l; p != NULL; p = p->prox)
        printf("Lista 1: %d \n", p->valor);
        printf("Lista 2: %d \n", j->valor);
}
int main(){
    Lista1 *l;
    Lista2 *q;
    l=lst_cria();
    q=lst_cria1();
    l=lst_insere(l);
    copia(l,q);
    lst_imprime(l,q);
}



