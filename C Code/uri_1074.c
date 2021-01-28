#include <stdio.h>

int main()
{

    int n, i, k;

    scanf("%d", &k);

    for (i = 1; i <= k; i++)
    {

        scanf("%d", &n);

        if (n > 0)
        {
            if (n % 2 == 0)
            {
                printf("EVEN POSITIVE\n");
            }
            else
            {
                printf("ODD POSITIVE\n");
            }
        }
        else if (n < 0)
        {
            if (n % 2 == 0)
            {
                printf("EVEN NEGATIVE\n");
            }
            else
            {
                printf("ODD NEGATIVE\n");
            }
        }
        else if (n == 0)
        {
            printf("NULL\n");
        }
    }
}