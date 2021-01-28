#include <stdio.h>

int main()
{

    int n, i, m;

    scanf("%d", &n);

    for (i = 1; i <= 12; i++)
    {

        if (n % 2 == 1)
        {

            printf("%d\n", n);
        }
        n++;
    }
}