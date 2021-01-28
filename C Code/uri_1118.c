#include <stdio.h>

int main()
{

    float media, sum = 0, x;
    int c = 0;
scanf("%f", &x);
    while (x != 2)
    {

        scanf("%f", &x);

        while (c != 2)
        {
            if (x >= 0 && x <= 10)
            {

                c++;
                sum += x;
            }
            else
            {
                printf("nota invalida\n");
            }
        }
         printf("media = %.2f\n", sum / c);
    printf("novo calculo (1-sim 2-nao)\n");
    }

   
}