#include <stdio.h>

int main()
{

    int x, z, count = 0, sum = 0, i;

    scanf("%d %d", &x, &z);

    while (x >= z)
    {
        scanf("%d", &z);
    }

    for (i = x; i < z; i++)
    {
        sum += i;
       
        count++;

        if (sum > z)
            break;
    }

    printf("%d\n", count);
}