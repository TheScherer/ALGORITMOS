/* comentário de código */

#include <stdio.h>


int main(void)
{
    int vetor [10];
    int i, nro, achei, fim; 

    for (i = 0; i<10;i++)
      {
         printf ("Informe os nros que compoem o vetor: ");
         scanf ("%d", &vetor[i]);
      }

   printf ("Informe o numero a ser pesquisado: ");
   scanf ("%d",&nro);


   i = 0;
   achei = 0;
   fim = 0;
//   opção utilizando enxergando variáveis tipo int while (( achei != 1) && ( fim != 1) )
    while ((!achei) && (!fim))
    {
         if (nro == vetor[i]) 
            achei = 1;
         else
            if (i < 10 - 1) 
               i++;
            else
               fim = 1;
    }

//{Testa se achou o nome}
   if (achei) 
      printf ("O nro está na posição %d ", i);
   else
      printf ("O nro nao existe no vetor %d", achei);

            
    system("pause");
    return 0;
}
