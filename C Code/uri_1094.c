#include <stdio.h>

int main()
{

    int n, sc = 0, sr = 0, ss = 0;
    float t;
    int x, i;
    char ch;
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        scanf("%d %c", &x, &ch);

        if (ch == 'C')
        {
            sc += x;
        }
        else if (ch == 'R')
        {
            sr += x;
        }
        else if (ch == 'S')
        {
            ss += x;
        }
    }

    t = sc + sr + ss;

    printf("Total: %.f cobaias\n", t);
    printf("Total de coelhos: %d\n", sc);
    printf("Total de ratos: %d\n", sr);
    printf("Total de sapos: %d\n", ss);
    printf("Percentual de coelhos: %.2f %%\n", (sc * 100.00) / t);

    printf("Percentual de ratos: %.2f %%\n", (sr * 100.00) / t);
    printf("Percentual de sapos: %.2f %%\n", (ss * 100.00) / t);
}


