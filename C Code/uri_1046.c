

#include<stdio.h>

int main(){

    int start_time , end_time , duration;

    scanf("%d %d" ,&start_time ,&end_time);

    if(start_time < end_time){

            duration = end_time - start_time ;
            printf("O JOGO DUROU %d HORA(S)\n" ,duration);
    }

    else if(start_time == end_time)
    {
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    
    else
    {
        duration = (24 - start_time)+end_time;

        printf("O JOGO DUROU %d HORA(S)\n" ,duration);
    }

  
    
}




// #include<stdio.h>

// int main(){

//     int x , y , d;

//     scanf("%d %d" ,&x ,&y);

//     d = y - x ;

//     if(y<0){

//         d = 24 + (y-x);
//     }
//     if (x==y)
//     {
//         printf("O JOGO DUROU 24 HORA(S)\n");
//     }
//     else 
//     {
//         printf("O JOGO DUROU %d HORA(S)" ,d)
//     }
    
    
// }

