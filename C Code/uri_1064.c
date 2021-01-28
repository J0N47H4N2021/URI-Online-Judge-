#include<stdio.h>

int main(){

    float a , sum = 0  ;

   int i, count = 0;

    for (i = 0; i < 6; i++)
    {
        scanf("%f" ,&a);
        if(a>0){
            count++;
            sum+=a;
        }
    }
    printf("%d valores positivos\n" ,count);
    printf("%.1f\n" ,sum/count);

    return 0;
}