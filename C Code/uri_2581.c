#include <stdio.h>
#include <string.h>

int main()
{

    int i, n;
    char x[300];
    scanf("%d", &n);

    for (i = 0; i <= n; i++)
    {

        gets(x);
        if (i != 0)
            printf("I am Toorg!\n");
    }
}


