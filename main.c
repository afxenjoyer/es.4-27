#include <stdio.h>

int main(void)
{
    int numeroDaScomporre;
    int divisore = 2;

    printf("Inserisci il numero da scomporre\n");
    scanf("%d", &numeroDaScomporre);

    while (numeroDaScomporre != 1)
    {
        if (numeroDaScomporre % divisore == 0)
        {
            printf("%d ", divisore);
            numeroDaScomporre = numeroDaScomporre / divisore;
        }
        else
        {
            divisore++;
        }
    }

    return 0;
}