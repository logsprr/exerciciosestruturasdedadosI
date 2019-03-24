#include<stdlib.h>
#include<stdio.h>
void maior(int z, int x, int c){
	if(z>x && z>c){
		printf("Maior:%d\n",z);
	}
	else if(x>c && x>z){
		printf("Maior:%d\n",x);
	}
	else{
		printf("Maior:%d\n",c);
	}
}

int main(){
	int a,b,c;
	
	printf("Digite 3 valores:\n");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	
	maior(a,b,c);
}
