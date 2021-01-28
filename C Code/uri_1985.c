#include <stdio.h>

int main()
{

    int x, y;
    double z , k;
    scanf("%d", &x);
    int i;

    double sum = 0;
    for (i = 1; i <= x; i++)
    {

        scanf("%d %lf", &y, &z);

        if (y == 1001)
        {
            k = 1.50*z;
        }
        else if (y == 1002)
        {
            k = 2.50*z;
        }
        else if (y == 1003)
        {
            k = 3.50*z;
        }

        else if (y == 1004)
        {
            k = 4.50*z;
        }
        else if (y == 1005)
        {
            k = 5.50*z;
        }

        sum+=k;
    }

    printf("%.2lf\n" ,sum);
}