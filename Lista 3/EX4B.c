#include<stdio.h>
#include<stdlib.h>




void circ(float raio){
	float area;
	
	const pi = 3.14159;
	
	area = pi * (raio*raio);
	printf("Area: %.2f\n",area);
}


int main(){
	
	float raio;
	
	printf("Digite o raio da circuferencia:\n");
	printf("Raio:");
	scanf("%f",&raio);
	
	circ(raio);
}
