#include <stdio.h>
#include <stdlib.h>

main()
{
   int n,i;
   printf("Digite a quantidade de termos da sequência de Fibo: ");
   scanf("%d", &n);
   printf("\nA sequencia de Fibo e: \n");
   for(i=0; i<n; i++)
       printf("%d ", fibo(i+1));
   getch();
} 

int fibo(int num)
{
   if(num==1 || num==2)
       return 1;
   else
       return fibo(num-1) + fibo(num-2); 
}
