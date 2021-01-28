#include <stdio.h>
#include <math.h>

int main()
{

    int n, m, x, c, count = 0 ;double lg;
    scanf("%d", &c);

        while (c--)
        {scanf("%d %d", &n, &m);

           lg=log10(n);

           lg*=m;
           printf("%.lf\n", floor(lg)+1);

        }
        return 0;
}