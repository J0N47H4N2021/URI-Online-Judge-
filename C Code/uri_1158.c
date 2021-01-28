#include <stdio.h>

int main()
{

    int n, x, y, i, j, sum = 0;

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {

        scanf("%d %d", &x, &y);

        for (j = 1, sum = 0; j <= 2 * y; j++, x++)
        {
            if (x % 2 != 0)
            {
                sum += x;
            }
        }

        printf("%d\n", sum);
    }
}

