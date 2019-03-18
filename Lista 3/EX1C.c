#include<stdlib.h>
#include<stdio.h>

struct cliente{
    char nome[50];
    float debitos = 15; //juros
    float saldo;

};
void cadastra(){
    struct cliente Cliente;
    for(i=0;i<5;i++){
        printf("Digite o nome do Cliente:\n");
        fgets(Cliente.nome[i],sizeof(nome),stdin);
        printf("Quanto vai depositar ? \n");
        scanf("%f",&Cliente.saldo[i]);
    }

}
void vecliente(){
    printf("Digite o codigo de sua conta:\n");
    int i;
    int op;
    scanf("%d",&op);
    for(i=0;i<5;i++){
        if(numconta == op){
            printf("NOme : %c");
            printf("Saldo :%f ");
            printf("DEbitos:%f:");
        }
    }
}
void menu(){
    int op;
    do{
        printf("Cadastrar Cliente: 1");
        printf("Ver  Cliente: 2");
        printf("Sair: 3");
        scanf("%d",&op);
        getchar();
    }while(op!=3);
    switch(op){
        case 1:
            cadastra();
            break;
        case 2:
            vecliente();
        default : printf("Opcao errada:\n");
    }

}
int main()
{

    int numconta;
    float saldo;
    float debito;
    float credito;
    int senha1[5]= {{1234},{2345},{3456},{4567},{5678}};
    int senha[5];


    printf("Digite o numero da sua conta: \n");
    printf("Gabriel -1: \n Ricardo -2: \n Vitor -3: \n Tales -4: \n Josefer -5: \n");
    scanf("%d",&numconta);


   switch(numconta)
   {
        case 1:
        printf("Digite sua senha:");
        scanf("%d",&senha[0]);
        break;

        case 2:
        printf("Digite sua senha:");
        scanf("%d",&senha[1]);
        break;

        case 3:
        printf("Digite sua senha:");
        scanf("%d",&senha[2]);
        break;

        case 4:
        printf("Digite sua senha:");
        scanf("%d",&senha[3]);
        break;

        case 5:
        printf("Digite sua senha:");
        scanf("%d",&senha[4]);
        break;

   }
   int i;

   for(i=0;i<5;i++){
        if(senha1[i]=senha[i]){
            printf("")
        }

   }


    printf("")

}
