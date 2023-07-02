#include<stdio.h>
int main(){
    float math,eng,sst,sc,urdu,Mo,percentage;
    int totalmarks=500;
    
    printf("Enter marks obtained in math ");
    scanf("%f",&math);
    printf("Enter marks obtained in eng ");
    scanf("%f",&eng);
    printf("Enter marks obtained in sst ");
    scanf("%f",&sst);
    printf("Enter marks obtained in sc ");
    scanf("%f",&sc);
    printf("Enter marks obtained in urdu ");
    scanf("%f",&urdu);
    Mo= math+urdu+eng+sst+sc;
    percentage= Mo/totalmarks*100;
    printf("\n marks obtained is %f", Mo);
    printf("\n percentage obtained is %f", percentage);
    return 0;



}