#include <stdio.h>

int main()
{

    int i, j, x, c, k = 0;

    while (scanf("%d", &x) != EOF)
    {
        c = 1;
        k++;
        for (i = 1; i <= x; i++)
        {
            for (j = 1; j <= i; j++)
            {
                c++;
            }
        }
        if (x == 0)
        {
            printf("Caso %d: %d numero\n" ,k,c);
        }
        else
        {
            printf("Caso %d: %d numeros\n", k, c);
        }

        printf("0");
        for (i = 1; i <= x; i++)
        {
            for (j = 1; j <= i; j++)
            {
                printf(" %d", i);
            }
        }
        printf("\n\n");
    }
}