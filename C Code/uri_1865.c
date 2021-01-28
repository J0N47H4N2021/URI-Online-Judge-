#include<stdio.h>
#include<string.h>

int main(){

    int n;
    char str[100];
int m;
scanf("%d" ,&m);
int i;
for(i=0 ; i<m ; i++){
    scanf("%s %d" ,str ,&n);

    if(!strcmp(str,"Thor"))
    printf("Y\n");

    else
    printf("N\n");}
}