#include<stdio.h>
#define M 3.14159

int main(){

    double R , C;

    scanf("%lf" ,&R);

    C = M*R*R;

    printf("A=%.4lf\n" ,C);

    return(0);
}