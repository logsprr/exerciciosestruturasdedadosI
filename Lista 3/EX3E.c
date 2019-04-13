#include<stdlib.h>
#include<stdio.h>

void perimetro(float raio){
	float per;
	per = 3.14*2*raio;
	
	printf("Perimetro: %.2f cm\n",per);
}

void area(float raio){
	float ar;
	ar = 3.14*(raio*raio);
	
	printf("Area: %.2f cm\n",ar);
}

int main(){
	float raio;
	
	printf("Digite o valor do raio:\n");
	scanf("%f",&raio);
	perimetro(raio);
	area(raio);
	
}
