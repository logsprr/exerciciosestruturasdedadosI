#include<stdlib.h>
#include<stdio.h>

int main(){
	int matriz[5][5];
	int j,k;
	for(j=0;j<5;j++){
		for(k=0;k<5;k++){
			matriz[j][k] = rand() % 10;
		}
	}
}


//nao ta pronta
