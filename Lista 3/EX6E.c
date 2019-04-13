#include <stdio.h>
#include <stdlib.h> 

main()
{
   int n,i;
   printf("Digite a quantidade de termos da sequência de Tribonacci: ");
   scanf("%d", &n);
   printf("\nA sequencia de Tribonacci e: \n");
   for(i=0; i<n; i++)
       printf("%d ", tibo(i));
   getch();
} 

int tibo(int num)
{
   if(num ==0 || num==1 || num==2 || num>2)
       return 1;
   else
       return tibo(num-1) + tibo(num-2) + tibo(num-3); 
}
