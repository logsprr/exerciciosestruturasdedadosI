#include<stdlib.h>
#include<stdio.h>
//Exercicio 2

struct Aluno{
    int matricula;
    char nome[50];
    float nota1;
    float nota2;
    float nota3;

};


int main(){
    struct Aluno Alunox;
    printf("Digite as informações do Aluno:\n");
    printf("Nome:\n");
    fgets(Alunox.nome, 40, stdin);
    printf("Matricula:\n");
    scanf("%d",&Alunox.matricula);
    printf("Nota 1:\n");
    scanf("%d",&Alunox.nota1);
    printf("Nota 2:\n");
    scanf("%d",&Alunox.nota2);
    printf("Nota 3:\n");
    scanf("%d",&Alunox.nota3);
    printf("Valor da estrutura :%d \n",sizeof(Alunox));

}
