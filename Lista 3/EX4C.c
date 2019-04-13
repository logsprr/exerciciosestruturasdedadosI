#include<stdio.h>
#include<stdlib.h>

void empregado(float ht, float vh, float pd){
	float sb = 0;
	sb = ht*vh;
	float td = 0;
	td = (pd/100)*sb;
	float sl = 0;
	sl = sb-td;
	
	
	printf("Horas Trabalhadas: %.2f hrs\n",ht);
	printf("Salario Bruto: R$ %.2f\n",sb);
	printf("Desconto: R$ %.2f\n",td);
	printf("Salario Liquido: R$ %.2f",sl);
}


int main(){
	float ht, vh, pd;
	
	printf("Digite as horas trabalhadas:\n");
	scanf("%f",&ht);
	printf("Valor por hora trabalhada:\n");
	scanf("%f",&vh);
	printf("Percentual de desconto:\n");
	scanf("%f",&pd);
	
	empregado(ht,vh,pd);
}
