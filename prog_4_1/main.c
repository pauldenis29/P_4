#include <stdio.h>
#include <stdlib.h>

//08/11/17
/*
for (;;){
print("qualsiasi cosa");
}
Cit Massimiliano Pavesio.
*/

//b^2 - 4ac, si ricordi che in c b alla seconda come (b*b)

int main()
{
    float a, b, c, delta;

    printf("Inserire le tre variabili a,b,c:\n");
    scanf("%f%f%f", &a, &b, &c);

    delta = (b*b) - (4*a*c); //ovviamente da inserire dopo lo scanf altrimenti non lo legge;

    if (delta > 0)
    {
        printf("L’equazione ha due soluzione REALI .\n");
    }
        if (delta == 0)
        {
            printf("L’equazione ha due soluzione REALI coincidenti.\n");
        }
    else
        if (delta < 0)
        {
            printf("L’equazione non ha soluzioni reali.\n");
        }

    return 0;
}
