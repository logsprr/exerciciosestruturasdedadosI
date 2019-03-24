#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void coordenada(float x1, float x2, float y1, float y2){
	float d=0;
	
	d=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	
	
	printf("Coordenada geral: %.2f \n",d);
}



int main(){
	float x1,x2,y1,y2;
	
	printf("Digite as coordenadas de X1 :\n");
	scanf("%f",&x1);
	printf("Digite as coordenadas de Y1 :\n");
	scanf("%f",&y1);
	printf("Digite as coordenadas de X2 :\n");
	scanf("%f",&x2);
	printf("Digite as coordenadas de Y2 :\n");
	scanf("%f",&y2);
	
	coordenada(x1,x2,y1,y2);
}
