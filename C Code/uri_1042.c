#include<stdio.h>

int main(){

    int a , b , c ;

    scanf("%d %d %d" ,&a ,&b ,&c);
/*1st*/
    if( a<b && a<c){

        printf("%d\n" ,a);
    }
    
    if(b<a  && b<c){

        printf("%d\n" ,b);
    }
    if(c<a  && c<b){

        printf("%d\n" ,c);
    }
/*2nd*/
if( b>a && a>c || c>a && a>b){

        printf("%d\n" ,a);
    }
    
    if(a>b  && b>c || c>b && b>a){

        printf("%d\n" ,b);
    }
    if(a>c  && c>b || b>c && c>a){

        printf("%d\n" ,c);
    }
/*3rd*/
    if( a>b && a>c){

        printf("%d\n" ,a);
    }
    
    if(b>a  && b>c){

        printf("%d\n" ,b);
    }
    if(c>a  && c>b){

        printf("%d\n" ,c);
    }
printf("\n");
    printf("%d\n%d\n%d\n" ,a ,b ,c);
}