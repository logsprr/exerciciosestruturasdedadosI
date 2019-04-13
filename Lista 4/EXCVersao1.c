#include<stdio.h>
#include<stdlib.h>
struct lista{
    int codigo;
    char titulo[50];
    char autor[20];
    char data[8];
    char edicao[20];
    char cidade[20];
    char editora[20];
    struct lista *prox;
};
typedef struct lista Lista;
Lista *lst_cria(void){
    return NULL;
}
int i;
Lista *lst_insere (Lista *l) {
    Lista *novo = (Lista*) malloc(sizeof(Lista));
    for(i=0; i<10;i++) {
        printf("Digite o codigo do livro:\n");
        scanf("%d",&novo->codigo);
        getchar();
        printf("Digite o titulo do livro:\n");
        fgets(novo->titulo, 50, stdin);
        getchar();
        printf("Digite o autor do livro:\n");
        fgets(novo->autor, 20, stdin);
        getchar();
        printf("Digite a data  do livro:\n");
        fgets(novo->data, 8, stdin);
        getchar();
        printf("Digite a edicao do livro:\n");
        fgets(novo->edicao, 20, stdin);
        getchar();
        printf("Digite a cidade do livro:\n");
        fgets(novo->cidade, 20, stdin);
        getchar();
        printf("Digite a editora do livro:\n");
        fgets(novo->editora, 20, stdin);
        novo->prox=l;
        getchar();
    }
    return novo;
}

void lst_imprime(Lista *l){
    Lista *p;
    int i=0;
    for(p=l; p != NULL; p = p->prox){
        while (i<10) {
            printf("Codigo = %d\n", p->codigo);
            printf("Titulo = %s\n", p->titulo);
            printf("Nome Autor = %s\n", p->autor);
            printf("Data = %s\n", p->data);
            printf("Edicao = %s\n", p->edicao);
            printf("Cidade = %s\n", p->cidade);
            printf("Editora = %s\n", p->editora);
            i++;
        }
    }
}


int main(){
    Lista *l;
    l=lst_cria();
    int op1=0;
    do{
        printf("Digite 1 para cadastrar o livro ou 2 para sair:\n");
        scanf("%d",&op1);
        if(op1==1){
            l=lst_insere(l);
            lst_imprime(l);
        }
    }while (op1==!2);
    system("pause>>0");
}
