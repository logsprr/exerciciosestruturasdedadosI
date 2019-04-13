#include<stdlib.h>
#include<stdio.h>
void calcula(float tempo, int velocidadeMedia){
	float distancia =0;
	distancia = tempo * velocidadeMedia;
	
	float litrosUsados =0;
	
	litrosUsados = distancia/12;
	
	printf("Velocidade media: %d\n",velocidadeMedia);
	printf("Tempo gasto: %.2f\n",tempo);
	printf("Distancia: %.2f\n",distancia);
	printf("Litros udados: %.2f",litrosUsados);
}

int main(){
	float t;
	int v;
	
	printf("Digite o tempo de viagem:\n");
	scanf("%f",&t);
	printf("Digite a velocidade media:\n");
	scanf("%d",&v);
	
	calcula(t,v);
}
