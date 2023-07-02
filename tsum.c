#include <stdio.h>
int main()
{
    int num, sum=0;
    printf("Enter a five-digit number: ");
    scanf("%d", &num);
    while(num>0)
    {
        sum += num%10;
        num /= 10;
    }
    printf("The sum of digits of the entered number is %d", sum);
    return 0;
}

