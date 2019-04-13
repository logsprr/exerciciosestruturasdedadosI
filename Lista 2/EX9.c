#include<stdlib.h>
#include<stdio.h>


int main(){
    int n;
    printf("Digite o tamanho da string :\n");
    scanf("%d",&n);
    char *vetor = (char*) malloc(n*sizeof(char));
    gets();
    printf("Digite sua string: \n");

    fgets(vetor,sizeof(vetor),stdin);

    int i;
    int aux;

    aux = strlen(vetor);
    printf("String invertida -----");
    for(i=aux-1; i>=0; i--)
    {
        printf("%c" ,vetor[i]);
    }
    free(vetor);
}
