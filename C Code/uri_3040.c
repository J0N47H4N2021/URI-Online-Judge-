#include <stdio.h>

int main()
{

    int m, n, o;
    int k;
    scanf("%d", &k);

    int i;

    for (i = 1; i <= k; i++)
    {
        scanf("%d %d %d", &m, &n, &o);

        if(m>=200 && m<=300 && n>=50 && o>=150){

            printf("Sim\n");
        }
        else
        {
            printf("Nao\n");
        }

    }
}


