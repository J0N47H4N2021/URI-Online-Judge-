#include <stdio.h>

int main()
{

    int i, j;

    int x = 1, n, y;

    scanf("%d %d", &n, &y);

    for (i = 1; i <= y, x < y; i++)
    {

        for (j = 1; j <= n; j++)
        {

            if (j == n)
            {
                printf("%d", x);
            }
            else
            {
                printf("%d ", x);
            }
            x++;
        }

        printf("\n");
    }
}