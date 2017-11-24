/*C program to print equilateral triangle or pyramid star pattern
 */

#include <stdio.h>

int main()
{
    int i, j, rows;

    /* Input number of rows to print */
    printf("Inserirsci un numero di righe: ");
    scanf("%d", &rows);

    /* Iterate through rows */
    if((rows > 0) && (rows <= 40))
    {
        for(i = 1; i <= rows; i++)
        {
            /* Print leading spaces */
            for(j = i; j < rows; j++) //j = i perchè se dal precedente ciclo for i ha assunto un valore uguale a rows non entrerà nel secondo ciclo evitando di stampare spazi e lasciando la base del triangolo "piena"
            {
                printf(" ");
            }

            /* Print star */
            for(j = 1; j <= (2*i-1); j++)  //NOTA BENE  che 2*i-1 sta ad indicare un numero dispari (2*n-1) infatti seguende le linee e gli spazi del terminale non posso avere numeri pari se voglio ottenre un triangolo isoscele!
            {
                printf("*");
            }

            /* Move to next line */
            printf("\n");
        }

    }
    else
    {
        printf("Errore nell'inserimento dei dati!");
    }


    return 0;
}
/*

    int r, c, s, num_utente;

    printf("Inserire un numero <= 40:\n");
    scanf("%d", &num_utente);

    for(r = 0; r < num_utente; r++)
    {
        for(c = 0; c < r; c ++)
        {

            printf("*");
        }

        printf(" *\n");
    }


*/
