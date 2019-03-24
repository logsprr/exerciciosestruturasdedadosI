#include<stdio.h>
#include<stdlib.h>

int main(){
	int codigoEmpregado;
	int anoN;
	int anoE;
	int idade;
	int temp;
	printf("Digite seu codigo:\n");
	scanf("%d",&codigoEmpregado);
	printf("Digite seu ano nascimento:\nPor exemplo: 1999\n");
	scanf("%d",&anoN);
	printf("Digite o ano de entrada na empresa:\nPor exemplo: 2010\n");
	scanf("%d",&anoE);
	
	idade = 2019-anoN;
	
	temp = 2019-anoE;
	
	if(idade>=65){
		printf("Requer aposentadoria\n");
	}
	else if(temp>=30){
		printf("Requer aposentadoria\n");
	}
	else if(idade>=60 && temp>=25){
		printf("Requer aposentadoria\n");
	}
	else{
		printf("Nao requer aposentadoria\n");
	}
	
}
