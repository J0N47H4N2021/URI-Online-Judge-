#include<stdio.h>

int main(){

    long long int a , b , i , sum = 0;

    scanf("%lld %lld" ,&a ,&b);

  sum = ((a+b)*(b-a+1))/2;

printf("%lld\n" ,sum);
}

// for ( i = a; i <= b; i++)
//   {
//     sum+=i;
//  }

