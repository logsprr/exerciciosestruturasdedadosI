#include<stdlib.h>
#include<stdio.h>



void calculSsalario(float salarioFixo, float vendasEfetuadas)
{
    printf("Digite seu salario fixo: \n");
    scanf("%f",&salarioFixo);

    printf("Digite o valor de suas vendas :\n");
    scanf("%f",&vendasEfetuadas);

    float total;

    total = salarioFixo + vendasEfetuadas;
    if(total>1500){
        total = total*0.05 + total;
        printf("Salario total : %.2f R$",total);
    }
    else{
        total = total*0.03 + total;
        printf("Salario total : %.2f R$",total);
    }

}


int main()
{
    int x, b;

    calculSsalario(x,b);

}
