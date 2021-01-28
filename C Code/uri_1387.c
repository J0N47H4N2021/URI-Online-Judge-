#include<stdio.h>

int main(){

    int x , y ;

    int i ;

    while(2){

        scanf("%d %d" ,&x ,&y);

        if(x==0&&y==0){
            break;
        }
        else
        {
            printf("%d\n" ,x+y);
        }
        
    }
}