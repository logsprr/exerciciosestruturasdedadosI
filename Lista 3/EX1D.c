#include<stdio.h>
#include<stdlib.h>

int main(){
	float notas[3];
	float mediaExercicios;
	float mediaAproveitamento;
	int i;
	printf("Digite as 3 notas:\n");
	for(i=0;i<3;i++){
		scanf("%f",&notas[i]);
	}
	printf("\nDigite a media dos exercicios:\n");
	
	scanf("%f",&mediaExercicios);
	
	mediaAproveitamento = notas[0]+notas[1]*2+notas[2]*3+ mediaExercicios;
	if(mediaAproveitamento>=9){
		printf("A\n");
	}
	else if(mediaAproveitamento>=7,5 && mediaAproveitamento<9){
		printf("B\n");
	}
	else if(mediaAproveitamento>=6 && mediaAproveitamento<7.5){
		printf("C\n");
	}
	else if(mediaAproveitamento <6){
		printf("D\n");
	}
}
