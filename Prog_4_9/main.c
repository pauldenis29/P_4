#include <stdio.h>
#include <stdlib.h>

int main()
{
    char carattere, caratterePrecedente;
    int occorrenza;

    printf("Inserisci una stringa: ");
    scanf("%c", &carattere);

    occorrenza = 1;

    while(carattere != '\n') //Finchè l'utente non preme invio \n
    {
        caratterePrecedente = carattere;
        scanf("%c", &carattere);

        if(carattere == caratterePrecedente)
        {
            occorrenza++;
        }
        else
        {
            if(occorrenza == 1)
            {
                printf("%c", caratterePrecedente);
            }
            else
            {
                if(caratterePrecedente == ' ')
                {
                    printf("%c", caratterePrecedente);
                }
                else
                {
                    printf("%d%c", occorrenza, caratterePrecedente);
                }
            }
        }
        occorrenza = 1;
    }

    return 0;
}
