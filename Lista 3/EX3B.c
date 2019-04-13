#include<stdio.h>
#include<stdlib.h>
void volume(float comprimento, float largura, float altura){
	float volume=0;
	volume = comprimento*largura*altura;
	
	
	printf("Volume: %.2f cm",volume);
}
int main(){
	float comp, lar,alt;
	
	printf("Comprimento: cm\n");
	scanf("%f",&comp);
	printf("Largura: cm\n");
	scanf("%f",&lar);
	printf("Altura: cm\n");
	scanf("%f",&alt);
	
	
	volume(comp,lar,alt);
}
