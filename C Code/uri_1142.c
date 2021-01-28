#include <stdio.h>

int main()
{

    int i, n, j, k = 1;

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            printf("%d ", k);
            k++;
        }
        k++;
        printf("PUM");

        printf("\n");
    }
}

