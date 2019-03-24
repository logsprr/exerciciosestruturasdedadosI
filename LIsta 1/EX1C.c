#include<stdlib.h>
#include<stdio.h>
#define n 2
#define g 4
#define h 6
int main()
{
    int vet10[n];
    int vet20[g];
    int vet30[h];
    int count;
    int i;
    int l;
    int j;
    int aux=0;
    printf("Digite o conjunto de 10 numeros: \n");
    for(i=0;i<n;i++){
        scanf("%d",&vet10[i]);
    }
    printf("Digite o conjunto de 20 numeros: \n");
    for(i=0;i<g;i++){
        scanf("%d",&vet20[i]);
    }
    count = 0;
	for(i=0; i<h; i++) {
	    for(j=0; j<h && vet10[i] != vet20[j]; j++); 
	    if (j < h) {
	      for(j=0; count && j<count && vet10[i] != vet30[j]; j++); 
	      	if (j >= count) { 
	        vet30[count] = vet10[i];
	        count++;
	      	}
		}
	}
	  
	if (!count) {
    	printf("Não há números repetidos.");
  	} else {
  		printf("Numeros repetidos:\n");
    	for(i=0; i<count; i++)
      		printf("%d\n", vet30[i]);
  	}

    
}

