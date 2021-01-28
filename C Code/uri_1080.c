#include <stdio.h>

int main()
{

    int num, max, count;

    int i;

    max = -1;
   
    for (i = 1; i <= 100; i++)
    {
        scanf("%d", &num);
        if (num > max)
        {
            max = num;
            count = i;
        }
    }
    printf("%d\n%d\n", max, count);
}