#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num < 0)
        num = -num;
    printf("Absolute value of the entered number is %d", num);
    return 0;
}
