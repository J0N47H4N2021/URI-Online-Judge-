#include<stdio.h>
#include<math.h>

int main(){

    double x1 , x2 , y1 , y2 , d , distance;

    scanf("%lf %lf %lf %lf" ,&x1 ,&y1 ,&x2 ,&y2);

    d = ((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    distance=sqrt(d);

    printf("%.4lf\n" ,distance);

    return (0) ;
}