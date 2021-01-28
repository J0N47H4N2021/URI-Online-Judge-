#include<stdio.h>

int main(){

    int n , x ;
    char ch;

    scanf("%d" ,&n);
    scanf(" %c " ,&ch);

    while(n-- > 0){

        scanf("%d" ,&x);

         if (x == 1) {
                if (ch == 'A') {
                    ch = 'B';
                } else if (ch == 'B') {
                    ch = 'A';
                }
             
            } else if (x == 2) {
                if (ch == 'B') {
                    ch = 'C';
                } else if (ch == 'C') {
                    ch = 'B';
                }
            
            } else if (x == 3) {
                if (ch == 'A') {
                    ch = 'C';
                } else if (ch == 'C') {
                    ch = 'A';
                }
             
            }
    }

    printf("%c\n" ,ch);

}