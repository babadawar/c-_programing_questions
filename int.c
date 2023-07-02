#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter value of a ");
    scanf("%d",&a);
    printf("enter value of b ");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("\nvalue of a is %d",a);
    printf("\nvalue of b is %d",b);
    return 0;
    

}