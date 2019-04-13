#include <stdio.h>
#include<stdlib.h>
void calcula(int horas, int minutos, int segundos){
	int total1=0;
	int total2=0;
	int totalSegundos=0;
	total1= horas*60*60;
	total2 = minutos*60;

	totalSegundos = total1+total2;


	printf("Se passaram desde a 00 horas %d segundos:\n",totalSegundos);

}

int main(){
	int horas;
	int minutos;
	int segundos;


	printf("Digite as horas:\n");
	scanf("%d",&horas);
	printf("Digite os minutos:\n");
	scanf("%d",&minutos);
	printf("Digite os segundos:\n");
	scanf("%d",&segundos);

	calcula(horas,minutos,segundos);

}