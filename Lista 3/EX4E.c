#include<stdio.h>
#include<stdlib.h>

void area(float raio, float altura){
	float volume;
	volume = 3.14159*(raio*raio)*altura;
	
	printf("Volume : %.2f\n",volume);
}
int main(){
	float raio,altura;
	
	printf("Digite a altura:\n");
	scanf("%f",&altura);
	printf("Digite o raio:\n");
	scanf("%f",&raio);
	
	
	area(raio,altura);
}
