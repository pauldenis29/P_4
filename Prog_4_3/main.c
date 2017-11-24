#include <stdio.h>
#include <stdlib.h>

//#define TRUE 1
//#define FALSE 0

int main()
{
    int num_utente, i = 0;


    while(num_utente != 0)
    {
        printf("Inserire un valore e '0' per terminare:\n");
        scanf("%d", &num_utente);

        printf("Valore inserito: %d\n\n", num_utente);

        i += num_utente ;

    }

    if(num_utente == 0)
    {
        printf("Hai inserito uno zero!\n");
        printf("La somma dei numeri inseriti e': %d\n", i);
    }

    return 0;
}


/*

    char control;

        do
        {
            scanf("%c", &control);
        }
        while(control != '\n');




    int x, finito, i;


    finito = TRUE;

    while(finito == TRUE)
    {
        printf("Inserire un valore e '0' per terminare:\n");
        scanf("%d", &x);

        printf("\n");

        if(x != 0)
        {
            printf("Valore inserito: %d\n\n", x);
        }
        else
        {
            printf("Hai inserito uno zero!\n");
            printf("La somma dei numeri inseriti e': %d\n", i);
        }

    }





        do
        {
            scanf("%c", &control);
        }
        while(control != '\n');
*/

