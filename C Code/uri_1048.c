#include<stdio.h>

int main(){

    float n ,tax;

    scanf("%f" ,&n);

    if(n>=0 && 400.00>=n){

        tax=n*0.15;
        printf("Novo salario: %.2f\n" ,n+tax);
        printf("Reajuste ganho: %.2f\n" ,tax);
        printf("Em percentual: 15 %%\n");
    }

   else if(n>=400.01 && 800.00>=n){

        tax=n*0.12;
        printf("Novo salario: %.2f\n" ,n+tax);
        printf("Reajuste ganho: %.2f\n" ,tax);
        printf("Em percentual: 12 %%\n");
    }

    else if(n>=800.01 && 1200.00>=n){

        tax=n*0.1;
        printf("Novo salario: %.2f\n" ,n+tax);
        printf("Reajuste ganho: %.2f\n" ,tax);
        printf("Em percentual: 10 %%\n");
    }

    else if(n>=1200.01 && 2000.00>=n){

        tax=n*0.07;
        printf("Novo salario: %.2f\n" ,n+tax);
        printf("Reajuste ganho: %.2f\n" ,tax);
        printf("Em percentual: 7 %%\n");
    }

    else if(n>=2000.01 ){

        tax=n*0.04;
        printf("Novo salario: %.2f\n" ,n+tax);
        printf("Reajuste ganho: %.2f\n" ,tax);
        printf("Em percentual: 4 %%\n");
    }
}