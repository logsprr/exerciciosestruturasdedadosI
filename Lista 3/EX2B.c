#include<stdio.h>
#include<stdlib.h>

int main(){
	int b;
	int a;
	int c;
	printf("Digite o valor de A:\n");
	scanf("%d",&a);
	printf("Digite o valor de B:\n");
	scanf("%d",&b);
	
	c=a;
	a=b;
	b=c;
	
	
	
	printf("Valor de B trocado: %d\n",b);
	printf("Valor de A trocado: %d\n",a);

}
