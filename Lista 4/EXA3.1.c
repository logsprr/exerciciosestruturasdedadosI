#include<stdio.h>
#include<stdlib.h>
struct lista{
    int info;
    struct lista *prox;
};
typedef struct lista Lista;
Lista *lst_cria(void){
    return NULL;
}
Lista *lst_insere (Lista* l, int i){
    Lista *novo = (Lista*) malloc(sizeof(Lista));
    novo->info = i;
    novo->prox = l;
    return novo;
}
void lst_imprime(Lista *l){
    Lista *p;
    for(p=l; p != NULL; p = p->prox)
        printf("info = %d\n", p->info);
}
void lst_libera(Lista *l){
    Lista *p=l;
    while (p!=NULL){
        Lista* t = p->prox;
        free(p);
        p = t;
    }
}
int main(){
    Lista *l;
    l=lst_cria();
    l=lst_insere(l,23);
    l=lst_insere(l,45);
    lst_imprime(l);
    lst_libera(l);
    system("pause>>0");
}
