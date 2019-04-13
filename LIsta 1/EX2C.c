#include<stdlib.h>
#include<stdio.h>
#define n 5
#define g 5
int main(){
	int matriz[g][n];
	int veta[n];
	int vetb[n];
	int j,k;
	int soma=0;
	printf("Digite os elementos da matrzi:\n");
	for(j=0;j<g;j++){
		for(k=0;k<n;k++){
			scanf("%d",&matriz[j][k]);
		}
	}
    for(j=0;j<n;j++){
        veta[k] = matriz[j][k];
        vetb[k] = matriz[j][k];
        for(k=0;k<n;k++){
            if(matriz[j][k]>veta[k])
                veta[k] = matriz[j][k];

            if(matriz[j][k]<vetb[k])
                vetb[k] = matriz[j][k];
        }
        j=0;
    }

    for(j=0;j<n;j++)
        soma+=veta[j]+vetb[j];
	printf("Matriz\n");
    for(j=0;j<n;j++){
        printf("\n");
        for(k=0;k<g;k++)
            printf("%d",matriz[k][j]);
    }


    printf("Vet A\n");
    for(j=0;j<n;j++)
        printf("%d ", veta[j]);

    printf("Vat B\n");
    for(k=0;k<n;k++)
        printf("%d ", vetb[k]);

    printf("Soma: %.2f\n", soma/2.0);
}

