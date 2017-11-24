#include <stdio.h>
#include <stdlib.h>
//
//SERIE DI FIBONACCI
//PROGRAMMA PER STAMPARE I PRIMI 20 NUMERI DELLA SERIE.

int main()
{
    int x, y, somma_prec, posiz_num;

    x = y = 1;
    somma_prec = 0;

    printf("SERIE DI FIBONACCI (primi 20 numeri):\n");
    printf("0\n"); //il primo numero della serie di fibonacci, la metto all'esterno perchè all'interno del ciclo for la stamperebbe ogni volta prima del numero successivo.

    for(posiz_num = 1; posiz_num < 20; posiz_num++) //posiz_num = 1 per includere lo 0 stampato prima altrimenti la serie in ouput sarebbe composta da 21 numeri invece che da 20.
    {
          x = y;
          y = somma_prec;
          somma_prec = x + y;

          printf("%d\n", somma_prec);
    }

    return 0;
}




/*
    printf("0\n");

    while(y >= 0 && y < 20)
    {

        z = x + y;

        printf("%d\n", z);




    }

*/
