#include<stdio.h>
int main()
{
    float lk,lm,lf,li,lc;
    printf("enter distance between two cities ");
    scanf("%f",&lk);
    lm=1000*lk;
    lc=100*lm;
    li=lc/2.54;
    lf=li/12;
    printf("\nthe distance in m is %f",lm);
    printf("\nthe distance in cm is %f",lc);
    printf("\nthe distance in inch is %f",li);
    printf("\nthe distance in feet is %f",lf);
    return 0;
}