#include<stdio.h>
#include<stdlib.h>
void area(float altura, float base){
	float area=0;
	
	area = (base*altura)/2;
	
	printf("Area do Triangulo: %.2f cm\n",area);
}

int main(){
	float altura, base;
	
	printf("Digite a base e altura: em cm\n");
	printf("Base:");
	scanf("%f",&base);
	printf("\nAltura:");
	scanf("%f",&altura);
	
	
	area(altura,base);
	
}
