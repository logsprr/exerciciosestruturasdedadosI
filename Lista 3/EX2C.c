#include<stdio.h>
#include<stdlib.h>
void polign(int nl, float medcm){
	if(nl==3){
		medcm = medcm*3;
		printf("Triangulo: Perimetro: %.2f cm\n",medcm);
	}
	else if(nl==4){
		medcm = medcm*medcm;
		printf("Quadrado: area: %.2f cm\n",medcm);
	}
	else if(nl==5){
		printf("Pentagono\n");
	}
	else{
		printf("Digite 3 4 ou 5:");
	}
}

int main(){
	int la;
	float cm;
	printf("Digite quantidade de lados:\n");
	scanf("%d",&la);
	printf("Digite a media em cm:\n");
	scanf("%f",&cm);
	
	polign(la,cm);
}
