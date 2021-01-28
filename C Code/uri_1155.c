#include "stdio.h"

int main()
{

 /*float*/   int i;

    float sum = 0;

    for (i = 1; i <= 100; i++)
    {

        sum += 1 / (float)i;/*sum += 1 / i;*/
    }

    printf("%.2f\n", sum);
}