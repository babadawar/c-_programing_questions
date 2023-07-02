#include <stdio.h>
int main()
{
    int year,day;
    printf("Enter year:");
    scanf("%d",&year);
    day=(((year-1)*365)+((year-1)/4)-((year-1)/100)+((year)/400)+1)%7;
    if(day==0)
        printf("Monday");
    else if(day==1)
        printf("Tuesday");
    else if(day==2)
        printf("Wednesday");
    else if(day==3)
        printf("Thursday");
    else if(day==4)
        printf("Friday");
    else if(day==5)
        printf("Saturday");
    else
        printf("Sunday");
    return 0;
}
