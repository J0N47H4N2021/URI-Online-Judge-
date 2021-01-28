#include <stdio.h>

int main()
{

    int n, m, i;

    scanf("%d", &m);

    for (i = 1; i <= m; i++)
    {
        scanf("%d", &n);
        {
            if (n <= 8000)
            {
                printf("Inseto!\n");
            }
            else
            {
                printf("Mais de 8000!\n");
            }
        }
    }
}