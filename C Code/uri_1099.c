#include <stdio.h>

int main()
{

    int x, m, n, i , k;

    scanf("%d", &x);


    for (k = 1; k <= x; k++)
    {

        scanf("%d %d", &m, &n);

        if (m < n)
        {
            int sum = 0;
            for (i = m + 1; i < n; i++)
            {
                if (i % 2 == 1)

                    sum += i;
            }

            printf("%d\n", sum);
        }
        else
        {
            int sum1 = 0 ;
            for (i = n+1 ; i < m ; i++)
            {
                if (i % 2 == 1)
                    sum1 += i;
            }

            printf("%d\n", sum1);
        }
        
    }
}


