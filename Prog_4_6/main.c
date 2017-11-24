#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n_int, somma, z = 0, int_inseriti = 1;
    float n_real, media;

    printf("Inserire un numero \"reale\":\n");
    scanf("%f", &n_real);

    do
    {
        printf("Inserire un numero intero:\n");
        scanf("%d", &n_int);

        somma = z + n_int;
        z = somma;

        media = (float)somma / (float)int_inseriti;

        int_inseriti++;

    } while(int_inseriti < 10 && media <= n_real);

    if(media > n_real || int_inseriti >= 10)
    {
        printf("\n");
        printf("Fine della corsa Cowboy!\n");
    }

    return 0;
}
