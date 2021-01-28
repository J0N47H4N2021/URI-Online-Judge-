#include<stdio.h>

int main(){

    int note , coin ;

    double n = 0 ;

    
    scanf("%lf" ,&n);{
           if(n>=0 && n<=1000000.00){
 int noteint = n ;
       coin = (n-noteint)*100;}
    }

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n" ,(int)n/100);
    note = (int)n % 100;
    printf("%d nota(s) de R$ 50.00\n" ,note/50);
    note = note % 50;
    printf("%d nota(s) de R$ 20.00\n" ,note/20);
    note = note% 20;
    printf("%d nota(s) de R$ 10.00\n" ,note/10);
    note = note% 10;
    printf("%d nota(s) de R$ 5.00\n" ,note/5);
    note = note% 5;
    printf("%d nota(s) de R$ 2.00\n" ,note/2);
    note = note% 2;

    printf("MOEDAS:\n");

  

    printf("%d moeda(s) de R$ 1.00\n" ,note/1);
    
    
    printf("%d moeda(s) de R$ 0.50\n" ,coin/50);
    coin = coin % 50;
    
    printf("%d moeda(s) de R$ 0.25\n" ,coin/25);
    coin = coin% 25;
    
    printf("%d moeda(s) de R$ 0.10\n" ,coin/10);
    coin = coin% 10;

    printf("%d moeda(s) de R$ 0.05\n" ,coin/5);
    coin = coin% 5;

    printf("%d moeda(s) de R$ 0.01\n" ,coin/1);
    
}