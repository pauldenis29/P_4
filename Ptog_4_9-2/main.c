#include <stdio.h>
#include <stdlib.h>

int main()
{

    char carat[130]; // 129 "spazi" 129 perchè il c conta anche lo zero a differenza degli umani;
    int i, finito = 0, num = 0, s = 1;

    printf("Inserisci una serie di caratteri:\n");

    //con il primo ciclo while conta il numero di "caratteri" (inclusi spazi) sono contenuti nel vettore

    while(finito == 0)
    {
        scanf("%c", &carat[num]);
        num++; //ogni volta che viene inserito un numero nel vettore [num] lo conto con n++

        if(carat[num - 1] == '\n') //se l'ultimo carattere è il tasto "invio" (\n) dell'utente esce dal ciclo while. NB: [num-1] sono i caratteri meno l'ultimo carattere \n
        {
            finito = 1;
        }
    }

    for(i = 1; i < num; i++) //esegue il ciclo for finchè 'i' non diventa maggiore o uguale dei numeri contenuti nel vettore
    {
         s = 1;
         while(carat[i - 1] == carat[i]) //while carattere precedente == carattere (attuale)
         {
             s++;
             i++;
         }

         if(s > 1)
         {
             printf("%d%c", s, carat[i - 1]); //stampa il numero delle ripetizioni
         }
         else
         {
             printf("%c", carat[i - 1]);
         }
    }

    return 0;
}
