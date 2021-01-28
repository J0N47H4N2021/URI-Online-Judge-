#include<stdio.h>

int main(){

    char ch ;
    double a , b ;

    scanf("%s %lf %lf" ,&ch ,&a ,&b);

    printf("TOTAL = R$ %.2f\n" ,(b*0.15)+a);

        return(0) ;
    
}