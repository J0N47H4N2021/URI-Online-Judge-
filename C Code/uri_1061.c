#include<stdio.h>

int main()

{
    int d1 , h1 , m1 , s1 , d2 , h2 , m2 , s2 , ts1 , ts2 , d , h , m , s ,ts;

      scanf("%*s %d" ,&d1);
      scanf("%d %*s" ,&h1);
      scanf("%d %*s" ,&m1);
      scanf("%d" ,&s1);

      scanf("%*s %d" ,&d2);
      scanf("%d %*s" ,&h2);
      scanf("%d %*s" ,&m2);
      scanf("%d" ,&s2);

      ts1=s1+(m1*60) + (h1*(60*60)) + (d1*(24*60*60));
      ts2=s2+(m2*60) + (h2*(60*60)) + (d2*(24*60*60));
      ts=ts2-ts1;

      d=ts/86400;
      ts=ts%86400;
      h=ts/3600;
      ts=ts%3600;
      m=ts/60;
      s=ts%60;

      printf("%d dia(s)\n" ,d);
      printf("%d hora(s)\n" ,h);
      printf("%d minuto(s)\n" ,m);
      printf("%d segundo(s)\n" ,s);
        
        return 0;
}