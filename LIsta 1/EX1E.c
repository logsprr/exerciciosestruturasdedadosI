#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define TAM 10

int FreqAbs(int []);
float FreqRelat(int);

int main()
{
   int I, opcao, VetorNotas[TAM], nota = 0, QtdeRepeticoes = 0;
   float TotalFreqRelat;
   
   for (I = 0; I <= TAM; I++) 
   {
            system ("cls");
            do
            {
               printf ("Nota: ");
               scanf ("%i", &VetorNotas[I]);
            }while (VetorNotas[I] < 0 || VetorNotas[I] > 10);
            
            printf ("\nNota Cadastrada com Sucesso.");
            getch();
   }
   
   system ("pause");
   system ("cls");
   
   printf ("\nMENU DE OPCOES:");
   printf ("\n\n1. Frequencia Absoluta");
   printf ("\n2. Frequencia Relativa");
   printf ("\n3. Sair");
   printf ("\n\nEscolha sua opcao: ");
   scanf ("%d", &opcao);
   
   switch (opcao)
   {
      case 1: QtdeRepeticoes = FreqAbs(VetorNotas);
              system ("cls");
              printf ("\nFrequencia Absoluta: %i", QtdeRepeticoes);
              getch();
      break;
      case 2: TotalFreqRelat = FreqRelat(QtdeRepeticoes);
              system ("cls");
              printf ("\nFrequencia Relativa: %f", TotalFreqRelat);
              getch();
      break;
      case 3: break;
      default:
              getch();
              printf ("\nOpcao Invalida!");
              getch();
      break;
   }
   
   return 0;
}

int FreqAbs(int VetorNotas[TAM])
{
   int I, nota, cont;
   
   system ("cls");
   
   printf ("\nNota a verificar: ");
   scanf ("%d", &nota);
   
   for (I = 0; I <= TAM; I++)
   {
       if (VetorNotas[I] == nota)
          cont++;
   }
   
   printf ("Frequencia Calculada com Sucesso!");
   getch();
   
   return cont;
}

float FreqRelat(int QtdeRepeticoes)
{
   float Total;
   
   if (QtdeRepeticoes == 0)
   {
      printf ("\nFrequencia Absoluta não calculada.");
      getch();
   }
   else
   {
      Total = QtdeRepeticoes / TAM;
   }
   
   printf ("Frequencia Calculada com Sucesso!");
   getch();
   
   return Total;
}
