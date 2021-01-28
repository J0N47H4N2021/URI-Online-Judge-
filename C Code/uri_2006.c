#include <stdio.h>

int main()
{
    int t, c = 0, a, i;

    scanf("%d", &t);
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a);

        if (t == a)
        {
            c++;
        }
    }
    printf("%d\n", c);
    return 0;
}