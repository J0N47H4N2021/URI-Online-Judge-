#include <stdio.h>

int main()
{

    int num, min, count;

    int i , n;

    scanf("%d" ,&n);

    min= 111;
   
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &num);
        if (num < min)
        {
            min = num;
            
            count = i;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n", min, count-1);
}