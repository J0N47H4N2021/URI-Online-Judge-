#include<stdio.h>
#define PI 3.14159

int main(){

    double R ;
    scanf("%lf" ,&R);

    printf("VOLUME = %.3lf\n" ,(4.0/3)*PI*(R*R*R));
}