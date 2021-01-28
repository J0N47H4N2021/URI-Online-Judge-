#include <stdio.h>

int main()
{

    int n, m;

    int i, count1 = 0, count2 = 0;

    scanf("%d" ,&n);

    for (i = 1; i <= n; i++)
    {
        scanf("%d", &m);
        if (m >= 10 && m <= 20)
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }
    printf("%d in\n%d out\n", count1, count2);
}