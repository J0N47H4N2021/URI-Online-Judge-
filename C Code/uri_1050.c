#include <stdio.h>

int main()
{
    int sal;

    scanf("%d", &sal);

    if (sal == 61)
    {
        printf("Brasilia\n");
    }
    else if (sal == 71)
    {
        printf("Salvador\n");
    }
    else if (sal == 11)
    {
        printf("Sao Paulo\n");
    }
    else if (sal == 21)
    {
        printf("Rio de Janeiro\n");
    }

    else if (sal == 32)
    {
        printf("Juiz de Fora\n");
    }

    else if (sal == 19)
    {
        printf("Campinas\n");
    }
    else if (sal == 27)
    {
        printf("Vitoria\n");
    }

    else if (sal == 31)
    {
        printf("Belo Horizonte\n");
    }

    else
    {
        printf("DDD nao cadastrado\n");
    }
    
    return 0;
}