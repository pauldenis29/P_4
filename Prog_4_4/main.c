#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int rig, col, num_utente;

    printf("inserire un numero intero <= 40: \n");
    scanf("%d", &num_utente);
    printf("\n"); //serve solo per lasciare spazio e rendere più evidente il triangolo


    if(num_utente > 0 && num_utente <= 40)
    {
        for (rig = 0; rig < num_utente; rig++)
        {
            for (col = 0; col < rig; col++)
            {
                printf ("*"); //sistemo prima le colonne e dopo metto le righe che hanno anche il '\n' che mandano al rigo successivo.
            }
            printf ("*\n"); //Se messo prima renderebbe caotica la sistemazione delle colonne (infatti prima sistemo le colonne e poi vado a capo al rigo successivo)
        }

    }
    else
    {
        printf("Si prega di inserire un numero compreso tra 0 e 40!");
    }

return 0;

}






