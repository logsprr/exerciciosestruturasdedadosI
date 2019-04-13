#include<stdlib.h>
#include<stdio.h>
#define n 5  // bom aqui esta o numero de valor que pode se ler  defini 5 para ser mais rapido do que 100


int main()

{
    float precovenda[n];
    float precompra[n];
    float lucro;


    int m10=0;
    int m20=0;
    int mm20=0;
    int i;
    int a=1;
    printf("Digiteo preco de compra das mercadorias:\n");
    for(i=0;i<n;i++){
        printf("%d--",a++);
        scanf("%f",&precompra);

    }
    printf("Digiteo preco de venda das mercadorias:\n");
    a=1;
    for(i=0;i<n;i++){
        printf("%d--",a++);
        scanf("%f",&precovenda);

    }

    for(i=0;i<n;i++){
        lucro = 100*((precovenda[i]-precompra[i])/precompra[i]);

        if(lucro<10.0){
            ++m10;

        }
        else if(lucro>=10.0 && lucro<=20.0){
            ++m20;

        }
        else if(lucro>20.0){
            ++mm20;
        }


    }

    printf("Mercadorias 10%%----------------%d\n",m10);
    printf("Mercadorias 10%% e 20%% --------%d\n",m20);
    printf("Mercadorias maior que 20%%------%d\n",mm20);

}
