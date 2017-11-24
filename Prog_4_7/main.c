#include <stdio.h>
#include <stdlib.h>
#include<limits.h> //Questa libreria permette di visualizzare (tramite printf ovviamente) il valore massimo o minimo di un int short ecc

int main() {

printf("Max value of char: %d\n", CHAR_MAX);
printf("Min value of char: %d\n", CHAR_MIN);

printf("Max value of short: %d\n", SHRT_MAX);
printf("Min value of short: %d\n", SHRT_MIN);

printf("Max value of int: %d\n", INT_MAX);
printf("Min value of int: %d\n\n", INT_MIN);

/*
unsigned long x;

while((x > 0) && (x != 0))
{
    x += 1000000;
    printf("%d\n", x);
}
*/

printf("\n\n");

return 0;
}
