#include<stdio.h>
#include<stdlib.h>
void parimpar(int *vetor){
	int i;
	int soma=0;
	int soma2=0;
	for(i=0;i<10;i++){
		if(vetor[i] %2 == 0){
			soma+=vetor[i];
		}
		else{
			soma2+=vetor[i];
		}
	}
	printf("Soma par : %d \n",soma);
	printf("Soma impar: %d",soma2);
}


int main(){
	int vetor[10];
	int i;
	printf("Digite o valor dos 100 elementos:\n");
	for(i=0;i<10;i++){
		scanf("%d",&vetor[i]);
	}
	parimpar(vetor);
}
