#include<stdio.h>
#include<stdlib.h>

int qumax;
int qumin;
int quatu;
float media;

void leEstoque(int a, int c, int d){
    printf("Digite a quantidade atual em estoque: \n");
    scanf("%d",&quatu);
    printf("Digite quantidade maxima do estoque: \n");
    scanf("%d",&qumax);
    printf("Digite a quantidade minima de estoque: \n");
    scanf("%d",&qumin);
    processa(qumax, qumin);
}


void processa(int x, int b){

    media = (qumax + qumin)/2;
}


void saida(){
    if(quatu >= media){
        printf("Nao efetuar compra");
    }
    else {
        printf("Efetuar compra");
    }

}



int main(){
    leEstoque(qumax,qumin,quatu);
    saida();

}
