#include<stdio.h>
#include<stdlib.h>
void peso(float alt, int sex){
	if(sex==1){
		float h;
		h = (72.7*alt)-58;
		printf("Peso ideal : %.2f\n",h);
	}
	else if(sex==2){
		float h;
		h = (62.1*alt)-44.7;
		printf("Peso ideal : %.2f\n",h);
	}
	else{
		printf("Voce digitou uma letra ou uma opcao invalida\n\n\nNULLL");
	}
}

int main(){
	float altura;
	int sexo;
	
	printf("Digite sua altura: cm\n");
	scanf("%f",&altura);
	printf("SEXO:\n Masculino = 1\nFeminino=2\n");
	scanf("%d",&sexo);

	peso(altura,sexo);
}
