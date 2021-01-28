#include<stdio.h>

int main(){

    int i , x , y ;

    while(2){

        scanf("%d %d" ,&x ,&y);

        if(x==y){
            break;
        }

        else if(x>y){
            printf("Decrescente\n");
        }
        else
        {
            printf("Crescente\n");
        }

    }
}

