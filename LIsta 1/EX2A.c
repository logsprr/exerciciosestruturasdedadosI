#include<stdio.h>
#include<stdlib.h>

int altura[5][2],maior,menor;
int i, k;
maior = altura[0][0];
menor = altura[0][0];

int a;
void armazena(){
	printf("Digite as alturas de cada delegacao:\n");
	for(i=0;i<5;i++){
		for(k=0;k<2;k++){
			printf("Delegacao %d :",a++);
			scanf("%f",&altura[i][k]);
		}
	}
}
void processaAlturaTotal(){
	for(i=0;i<5;i++){
		for(k=0;k<2;k++){
	        if(altura[i][k]>0){
	            if(altura[i][k]>maior){
	                maior = altura[i][k];
	                break;
	            }
	            if(altura[i][k]<menor){
	                menor = altura[i][k];
	                break;
	            }
	        }
		}
    }
}

void processaAlturadelegacao1(){
	float ma=0;
	float me=0;
	ma = altura[0][0];
	me = altura[0][0];
	
	if(altura[0][0]>altura[0][1]){
		printf("Delegacao 1 : Altura : Maior : %.2f Menor : %.2f",ma,me);
	}
	else if(altura[0][1]>altura[0][0]){
		printf("Delegacao 1 : Altura : Maior : %.2f Menor : %.2f",me,ma);
	}	
	
}

void processaAlturadelegacao2(){
	float ma=0;
	float me=0;
	ma = altura[0][0];
	me = altura[0][0];
	
	if(altura[1][0]>altura[1][1]){
		printf("Delegacao 1 : Altura : Maior : %.2f Menor : %.2f",ma,me);
	}
	else if(altura[1][1]>altura[1][0]){
		printf("Delegacao 1 : Altura : Maior : %.2f Menor : %.2f",me,ma);
	}	
	
}

void processaAlturadelegacao3(){
	float ma=0;
	float me=0;
	ma = altura[0][0];
	me = altura[0][0];
	
	if(altura[2][0]>altura[2][1]){
		printf("Delegacao 1 : Altura : Maior : %.2f Menor : %.2f",ma,me);
	}
	else if(altura[2][1]>altura[2][0]){
		printf("Delegacao 1 : Altura : Maior : %.2f Menor : %.2f",me,ma);
	}	
	
}

void processaAlturadelegacao4(){
	float ma=0;
	float me=0;
	ma = altura[0][0];
	me = altura[0][0];
	
	if(altura[3][0]>altura[3][1]){
		printf("Delegacao 1 : Altura : Maior : %.2f Menor : %.2f",ma,me);
	}
	else if(altura[3][1]>altura[3][0]){
		printf("Delegacao 1 : Altura : Maior : %.2f Menor : %.2f",me,ma);
	}	
	
}
void processaAlturadelegacao5(){
	float ma=0;
	float me=0;
	ma = altura[0][0];
	me = altura[0][0];
	
	if(altura[4][0]>altura[4][1]){
		printf("Delegacao 1 : Altura : Maior : %.2f Menor : %.2f",ma,me);
	}
	else if(altura[4][1]>altura[4][0]){
		printf("Delegacao 1 : Altura : Maior : %.2f Menor : %.2f",me,ma);
	}	
	
}


void exibe(){
	processaAlturaTotal();
	processaAlturadelegacao1();
	processaAlturadelegacao2();
	processaAlturadelegacao3();
	processaAlturadelegacao4();
	processaAlturadelegacao5();
}

int main(){
	armazena();
	exibe();
	
}
