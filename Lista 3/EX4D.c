#include<stdio.h>
#include<stdlib.h>

void fat(float F){
	float c;
	c=(F-32)*(5/9);
	printf("Temperatura em Celcius: %.2f\n",c);
}


int main(){
	float f;
	
	printf("Digite a temperatura em Fahrenheit:\n");
	scanf("%f",&f);
	
	fat(f);
}
