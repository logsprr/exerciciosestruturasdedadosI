#include<stdio.h>
#include<stdlib.h>

void calcula(float salario, float quilowatts){
	float valor=0;
	valor = salario/7;
	float valor2=0;
	valor2 = valor/100;
	float valor3 = 0;
	valor3 = valor2*quilowatts-(valor2*quilowatts*10)/100;
	printf("Cada Kw vale : R$ %.2f\n",valor2);
	printf("Valor a ser pago: R$ %.2f\n",valor2*quilowatts);
	printf("Valor com desconto: R$ %.2f\n",valor3);
}


int main(){
	float salario;
	float quilowatts;
	
	printf("Digite o salrio minimo:\n");
	scanf("%f",&salario);
	printf("Digite a quantidade KW:\n");
	scanf("%f",&quilowatts);
	
	calcula(salario,quilowatts);
}
