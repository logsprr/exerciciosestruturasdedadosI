#include <stdio.h>
#include<stdlib.h>

int soma(int *vetor, int n) { 
	if (n == 0) 
		return 0; 
	else 
		return (vetor[n-1] + soma(vetor, n - 1)); 
} 

int main() { 
	int vetor[15];
	printf("Digite os elementos do vetor:\n");
	int i;
	for(i=0;i<15;i++){
		scanf("%d",&vetor[i]);
	}
	printf("Soma dos elementos do vetor: %d\n", soma(vetor, 15)); 
return 0; 
}

