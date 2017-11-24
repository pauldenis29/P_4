#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, base;

    printf("Inserirsci la base del triangolo: ");
    scanf("%d", &base);
    printf("\n"); //serve solo a dare esteticamente più spazio;

    if((base > 0) && ((base % 2) == 1))
    {
        for(i = 0; i <= (base/2); i++)
        {
        /* Print leading spaces */
            for(j = 1; j <= i; j++)
            {
                printf(" ");
            }

            /* Print stars */
            for(j = 1; j <= (base - (i*2)); j++)
            {
                printf("*");
            }

            /* Move to next line */
            printf("\n");
        }
    }
    else
    {
        printf("Errore nell'inserimento dei dati!\n");
    }

    return 0;
}




/*
int i, j, base;

    printf("Inserirsci un numero di righe: ");
    scanf("%d", &base);

    if((base > 0) && ((base % 2) == 1))
    {
        for(i = 1; i <= base; i++)
        {

            for(j = i; j < i; j++)
            {
                printf(" ");
            }

            for(j = 1; j <= (2*i-1); j++)
            {
                printf("*");
            }

            printf("\n");
        }

    }
    else
    {
        printf("Errore nell'inserimento dei dati!");
    }


    return 0;
*/
