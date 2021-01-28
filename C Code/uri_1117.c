#include<stdio.h>

int main(){

    float media , sum = 0 , x;
    int c=0;

    while (2)
    {
        
        if(c==2){
            break;
        }
        
        scanf("%f" ,&x);

        

        if(x>=0 && x<=10){

            c++;
            sum+=x;
        }
        else
        {
            printf("nota invalida\n");
        }
        
    }

    printf("media = %.2f\n" ,sum/c);


    
}