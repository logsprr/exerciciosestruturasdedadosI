#include<stdio.h>
#include<stdlib.h>
void percorre(int *matriz){
	int i;
	int o;
	for(i=0;i<100;i++){
		for(o=0;o<200;o++){
			if(matriz[i][o]==matriz[40][0] && matriz[i][o]==matriz[40][0] ){
				
			}
		}
	}
}
int main(){
	int matriz[100][200];
	int i;
	int o;
	
	//estou criando esse for para ser mais rapido do que digitar essa matriz inteira
	for(i=0;i<100;i++){
		for(o=0;o<200;o++){
			matriz[i][o] = rand() %10;
		}
	}
	percorre(matriz);
}



// nao pronta