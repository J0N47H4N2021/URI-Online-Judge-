#include <stdio.h>

int main()
{

    int v, t;

    while (scanf("%d %d", &v, &t) != EOF)
    {

        if (v >= -100 && 100 >= v && t >= 0 && t <= 200)

            printf("%d\n", 2 * (v * t));
    }
}