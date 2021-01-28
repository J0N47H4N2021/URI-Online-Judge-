
#include<stdio.h>

int main(){

    int i, j ;

    for ( j = 60 , i=1; j >= 0; j=j-5)
    {
        printf("I=%d J=%d\n" ,i , j);
        i=i+3;
    }
    
}

