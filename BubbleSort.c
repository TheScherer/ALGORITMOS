/* Algoritmo BubbleSort */

#include <stdio.h>


int main(void)
{
    int vetor [10];
    int i, j, nro, aux; 

    for (i = 0; i<10;i++)
      {
         printf ("Informe os nros que compoem o vetor: ");
         scanf ("%d", &vetor[i]);
      }

    for (j = 0; j < 10; j++)
         for (i = 0; i < 10 - 1; i++)
         {
             if (vetor[i] > vetor [i + 1])
             {
                 aux = vetor[i];
                 vetor[i] = vetor [i + 1];
                 vetor[i + 1] = aux;
             }
         }
 
     for (i = 0; i<10;i++)
      {
         printf ("Informe os nros que compoem o vetor: %d \n" , vetor[i]);
      }

 
            
    system("pause");
    return 0;
}
