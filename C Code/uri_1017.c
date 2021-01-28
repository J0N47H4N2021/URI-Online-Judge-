#include<stdio.h>

int main(){

    int x , y ;
    float fuel ;
    scanf("%d %d" ,&x ,&y);

    fuel = (float)x*y/12;

    printf("%.3lf\n" ,fuel);

    return 0;
}