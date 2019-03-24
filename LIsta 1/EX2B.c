#include<stdlib.h>
#include<stdio.h>

int main(){
	float valores[12][4];
	int j,k;
	int a=1;
	int b=2;
	float totalAno;
	float totalmes[12];
	float totalsemana;
	for(j=0;j<12;j++){
		for(k=0;k<4;k++){
			valores[j][k] = rand() % 5;
		}
	}
	printf("|Me:1|");
	for(k=0;k<4;k++){
		printf("|Se:%d|",a++);
	}
	printf("\n");
	for(j=0;j<12;j++){
		printf("|Me:%d|",b++);
		for(k=0;k<4;k++){
			printf("|%.2f|",valores[j][k]);
		}
		printf("\n");
	}
	for(j=0;j<12;j++){
		for(k=0;k<4;k++){
			totalsemana=totalsemana+valores[j][k];
     		totalAno=totalsemana;
     		totalAno=totalAno+totalsemana;
     		totalmes[j] = totalsemana;
		}
	}
	
	printf("\n\nTotal semana : %.2f\n\n",totalsemana);
	b=1;
	for(j=0;j<12;j++){
		printf("Total mes %d: %.2f\n",b++,totalmes[j]);
	}
	printf("\nTotal ano: %.2f\n",totalAno);
	
}
