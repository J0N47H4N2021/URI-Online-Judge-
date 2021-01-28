#include <stdio.h>

int main()
{

    int n, x, y, i, j, sum = 0;

   while(1)
    {

        scanf("%d", &x);
        if(x==0){
            break;
        }

        for (j = 1, sum = 0; j <= 2 * 5; j++, x++)
        {
            if (x % 2 == 0)
            {
                sum += x;
            }
        }

        printf("%d\n", sum);
    }
}

