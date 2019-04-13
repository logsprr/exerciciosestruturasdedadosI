#include<stdlib.h>
#include<stdio.h>

struct cadastro{
    char *nome;
    int idade;
    char *endereco;

};


int n;

void ponteiro(){
    struct cadastro Cliente;
    printf("Qual tamanho do vetor que deseja abrir?");
    scanf("%d",&n);
    getchar();
    Cliente.nome = (char *) malloc(n*sizeof(char));
    if(Cliente.nome == NULL){
        printf("Memoria Insuficinte");
    }
    Cliente.endereco = (char *) malloc(n*sizeof(char));
    if(Cliente.endereco == NULL){
        printf("Memoria insuficiente");
    }

}

void pegadados(){
    struct cadastro Cliente;
    int i;
    printf("Digite seu nome:");
    fgets(Cliente.nome,Cliente.nome,stdin);
    printf("%s",Cliente.nome);
    printf("Digite seu endereco:");
    fgets(Cliente.endereco,Cliente.endereco,stdin);
    printf("%s",Cliente.endereco);
    printf("Digite sua idade:");
    scanf("%d",&Cliente.idade);

}


int main()
{
    struct cadastro Cliente;
    ponteiro();
    pegadados();
    free(Cliente.nome);
    free(Cliente.endereco);
}
