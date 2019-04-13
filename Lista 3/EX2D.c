#include<stdlib.h>
#include<stdio.h>
void pnz(int m){
	if(m>0){
		printf("Positivo\n");
	}
	else if(m<0){
		printf("Negativo\n");
	}
	else if(m==0){
		printf("Zero\n");
	}
	else{
		printf("NULL");
	}
}
int main(){
	int n;
	printf("Digite um valor:\n");
	scanf("%d",&n);
	
	pnz(n);
	
}
