#include <stdio.h>
#include <stdlib.h>

#define FALSE 0 //Per il Linguaggio C lo ZERO è uguale a "FALSO" mentre ogni altro valore è pari al vero
#define TRUE 1 //Qui ovviamente come "VERO" abbiamo scelto il valore 1 perchè "più comodo"

int main()
{
    int num_utente;
    char  flag, ultimoCarattere;

    flag = TRUE; //Per evitare incappare in infiniti loop nel while inserico la condizione TRUE

    while(flag == TRUE)
    {
            printf("Inserire un numero da 1 a 12:\n");
            scanf("%d", &num_utente);

            printf("\n"); //serve solo per dare spazio tra una riga e l'altra

                switch (num_utente)

                {
                    case 1: printf("Gennaio");
                    break;

                    case 2: printf("Febbraio");
                    break;

                    case 3: printf("Marzo");
                    break;

                    case 4: printf("Aprile");
                    break;

                    case 5: printf("Maggio");
                    break;

                    case 6: printf("Giugno");
                    break;

                    case 7: printf("Luglio");
                    break;

                    case 8: printf("Agosto");
                    break;

                    case 9: printf("Settembre");
                    break;

                    case 10: printf("Ottobre");
                    break;

                    case 11: printf("Novembre");
                    break;

                    case 12: printf("Dicembre");
                    break;

                    case 'F':
                       flag = FALSE,
                    break;

                    default:
                        printf("Errore nell'inserimento dei dati.\n"); // il default esclude i casi "< 1 e > 12"

                    break;

                }

                printf("\n\n"); //serve solo per dare spazio tra il numero inserito e il mese corrispondente

                do
                {
                    scanf("%c", &ultimoCarattere);
                }
                while(ultimoCarattere != '\n');

    }

    return 0;

}

/*
int main()
{
    int num_utente;

    printf("Inserire un numero da 1 a 12:\n");
    scanf("%d", &num_utente);

    while(num_utente > 0 || num_utente <= 12)
    {
        printf("\n%d = ", num_utente);

            switch (num_utente)

            {
                case 1: printf("Gennaio");
                break;

                case 2: printf("Febbraio");
                break;

                case 3: printf("Marzo");
                break;

                case 4: printf("Aprile");
                break;

                case 5: printf("Maggio");
                break;

                case 6: printf("Giugno");
                break;

                case 7: printf("Luglio");
                break;

                case 8: printf("Agosto");
                break;

                case 9: printf("Settembre");
                break;

                case 10: printf("Ottobre");
                break;

                case 11: printf("Novembre");
                break;

                case 12: printf("Dicembre");
                break;

                default:
                    printf("\n Ma porca troia, secondo te gli esseri umani hanno assegnato numeri negativi o superiori a 13 mesi nel calendario?!\n");
                break;

            }

            printf("\n\n");

        }

    return 0;

}*/

