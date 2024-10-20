#include <stdio.h>
#include <math.h>

int main(void)
{
    int i;
    int numeroDaScomporre;
    int fattori = 0;

    printf("Inserisci il numero da scomporre\n");
    scanf("%d", &numeroDaScomporre);

    if (numeroDaScomporre > -1)
    {
        while(numeroDaScomporre % 2 == 0)
        {
            numeroDaScomporre = numeroDaScomporre / 2;
            printf("2\t");
        }
        for (i = 3; i <= sqrt(numeroDaScomporre) && numeroDaScomporre == 1; i+=2)
        {
            while(numeroDaScomporre % i == 0)
            {
                numeroDaScomporre = numeroDaScomporre / i;
                fattori = i;
                printf("%d\t", fattori);
            }
        }
    }
    else
    {
        printf("Il numero da scomporre è invalido\n");
    }

    return 0;
}