#include <stdio.h>

int main()
{

    int n, i, fib = 0, f = 0, s = 1;

    scanf("%d", &n);

    printf("0");
    for (i = 0; i < n - 1; i++)
    {

        fib = f + s;
        f = s;
        s = fib;
        printf(" %d", f);
    }

    printf("\n");
}


