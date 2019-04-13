#include<stdio.h>
#include<stdlib.h>
struct lista{
    int codigo;
    int idLivros;
    char titulo[50];
    char autor[20];
    char data[8];
    char edicao[20];
    struct lista *prox;
};
struct editoras{
    int idEditora;
    char editora[20];
    char cidade[20];
    struct editoras *prox;
};
typedef struct lista Lista;
typedef struct editoras Editora;
Editora *edi_cria(void){
    return NULL;
}
Lista *lst_cria(void){
    return NULL;
}
int tam=0;
Editora *edi_insere(Editora *e){
    int op;
    int i;
    printf("Digite quantas Editoras ira cadastrar:\n");
    scanf("%d",&op);
    getchar();
    Editora *novo = (Editora*) malloc(sizeof(Editora)*op);
    for(i=0;i<op;i++){
        printf("Nome Editora:\n");
        fgets(novo->editora, 20, stdin);
        printf("Cidade Editora:\n");
        fgets(novo->cidade, 20, stdin);
        printf("Id Editora:\n");
        scanf("%d",&novo->idEditora);
        getchar();
    }
    return novo;
}
Lista *lst_insere (Lista *l, Editora *e) {
    int i;
    Lista *novo = (Lista*) malloc(sizeof(Lista) * tam);
    Editora *edi = NULL ;
    printf("Para sair de cadastrar digite 1:\nPara continuar digite 0:\n");
    scanf("%d",&i);
    do{
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
        printf("Digite o id do livro que corresponde a editora:\n");
        for(int k=0;k<sizeof(e);k++){
            printf("Editora: %s Cidade : %s Codigo: %d\n",edi->editora,edi->cidade,edi->idEditora);
        }
        scanf("%d",&novo->idLivros);
        
        novo->prox=l;
        getchar();
        tam++;
    }while(i!=1);
    return novo;
}

void lst_imprime(Lista *l, Editora *e){
    Lista *p;
    Editora *q;
    int i=0;
    for(p=l; p != NULL; p = p->prox){
        while (i<tam) {
            printf("Codigo = %d\n", p->codigo);
            printf("Titulo = %s\n", p->titulo);
            printf("Nome Autor = %s\n", p->autor);
            printf("Data = %s\n", p->data);
            printf("Edicao = %s\n", p->edicao);
            if(p->idLivros == q->idEditora){
                printf("Cidade = %s\n", q->cidade);
                printf("Editora = %s\n", q->editora);
            }
            i++;
        }
    }
}


int main(){
    Lista *l;
    Editora *e;
    l=lst_cria();
    e=edi_cria();
    int op1=0;
    do{
        printf("Digite 1 para cadastrar o livro ou 2 para sair:\n");
        scanf("%d",&op1);
        if(op1==1){
            e=edi_insere(e);
            l=lst_insere(l,e);
            lst_imprime(l,e);
        }
    }while (op1==!2);
    system("pause>>0");
}
