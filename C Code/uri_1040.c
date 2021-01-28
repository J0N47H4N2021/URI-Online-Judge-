#include<stdio.h>

int main(){

    float n1 , n2 , n3 , n4 ,totalavg ,totalavg2 , x;

    scanf("%f %f %f %f" ,&n1 ,&n2 ,&n3 ,&n4);

    totalavg = (n1*2+n2*3+n3*4+n4*1)/10.00;

    if(totalavg<5.0){

        printf("Media: %.1f\nAluno reprovado.\n",totalavg);
    }

    else if(totalavg>=7.0){

        printf("Media: %.1f\nAluno aprovado.\n",totalavg);
    }

    else if (totalavg>=5.0&&totalavg<=6.9)
    {
       
        scanf("%f" ,&x);
            totalavg2 = (totalavg+x)/2;
            printf("Media: %.1f\n" ,totalavg);
             printf("Aluno em exame.\n");
        printf("Nota do exame: %.1f\n" ,x);
            printf("Aluno aprovado.\nMedia final: %.1f\n",totalavg2);
    }

    return 0;
    
}