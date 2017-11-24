#include <stdio.h>
#include <stdlib.h>

//Serie Fibonacci con prodotto sostitutito alla somma degli ultimi due numeri in prgressione.

int main()
{

    int x, y, posiz_num, prodot_prec;

    x = y = 1;
    prodot_prec = 2;

    printf("Primi 20 numeri Serie Fibonacci modificata:\n");
    printf("1\n");

    for(posiz_num = 1; posiz_num < 20; posiz_num++)
    {
        x = y;
        y = prodot_prec;
        prodot_prec = x * y;

        printf("%d\n", prodot_prec);
    }

    return 0;
}
