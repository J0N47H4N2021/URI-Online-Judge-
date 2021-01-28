#include <stdio.h>

int main()
{

    int a, s, d, x = 0, y = 0, z = 0, i = 0;

    while (2)
    {
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d %d", &a, &s);

        i++;

        if (a > s)
        {

            x++;
        }
        else if (s > a)
        {
            y++;
        }
        else if (a == s)
        {
            z++;
        }
        scanf("%d", &d);

        if (d == 1)
        {

            continue;
        }
        else if (d == 2)
        {
            break;
        }
    }

    printf("%d grenais\n" ,i);
    printf("Inter:%d\n" ,x);
    printf("Gremio:%d\n" ,y);
    printf("Empates:%d\n",z);
    
    if(x>y){
        printf("Inter venceu mais\n");
    }
    else if(y>x){
        printf("Gremio venceu mais\n");
    }
    else if(x==y){
        printf("Não houve vencedor\n");
    }
}