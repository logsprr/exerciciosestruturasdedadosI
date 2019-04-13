#include <stdlib.h>
#include <stdio.h>

int Soma(int valor, int maximo)
{

    if (valor < maximo)
        return valor + Soma(++valor, maximo); 

    return 0; 

}


int main(){
    int num = 0;
    int soma = 0;
    printf("Informe o numero :");
    scanf("%d", &num);

    soma = Soma(soma, num);

    printf("A soma total eh: %d\n", soma);

    return 0;

}
