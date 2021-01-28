#include<stdio.h>

int main(){

    int m , c1 , c2 , c3 ,oldest;

    scanf("%d %d %d" ,&m ,&c1 ,&c2 );

c3 = m-(c1+c2);

oldest = (c1>c2?(c1>c3?c1:c3):(c2>c3?c2:c3));

printf("%d\n" ,oldest);
}