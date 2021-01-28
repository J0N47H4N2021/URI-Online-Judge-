#include<stdio.h>

int main(){

    int i , j , k=7 ;

    for(i=1 ; i< 10 ; i=i+2){

        for(j=7 ; j>4 ; j--){

            printf("I=%d J=%d\n" ,i , k);
            k--;
        }
        k=k+5;
    }

}

