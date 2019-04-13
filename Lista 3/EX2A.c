#include<stdio.h>
#include<stdlib.h>


int main(){
	int a,b,c,d;
	int mult;
	int soma;
	printf("Digite o valor de A:\n");
	scanf("%d",&a);
	printf("Digite o valor de B:\n");
	scanf("%d",&b);
	printf("Digite o valor de C:\n");
	scanf("%d",&c);
	printf("Digite o valor de D:\n");
	scanf("%d",&d);
	
	mult = a*b;
	printf("A*B=%d\n",mult);
	mult = a*c;
	printf("A*C=%d\n",mult);
	mult = a*d;
	printf("A*D=%d\n",mult);
	mult = b*c;
	printf("B*C=%d\n",mult);
	mult = b*d;
	printf("B*D=%d\n",mult);
	mult = c*d;
	printf("C*D=%d\n",mult);
	
	soma = a+b;
	printf("A+B=%d\n",soma);
	soma = a+c;
	printf("A+C=%d\n",soma);
	soma = a+d;
	printf("A+D=%d\n",soma);
	soma = b+c;
	printf("B+C=%d\n",soma);
	soma = b+d;
	printf("B+D=%d\n",soma);
	soma = c+d;
	printf("C+D=%d\n",soma);
	
	
}
