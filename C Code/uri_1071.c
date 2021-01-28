#include <stdio.h>

int main()
{

    int i, x, y, sum = 0;

    scanf("%d %d", &x, &y);

    if (y>0)
    {

        for (i = x - 1; i > y; i--)
        {
            if (i % 2 == 1 )//(i%2!=0)
            {

                sum += i;
            }
        }printf("%d\n", sum);
    }


    else if(y<0)
    {
      
        int  sum1 =0;
        for (i = y+1 ; i < x; i++)
        {
            if (i % 2 == 1 || i%2 == -1)//(i%2!=0)
            {

                sum1 += i;

               
            }
        }printf("%d\n", sum1);
    }
    

    
}