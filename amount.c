#include <stdio.h>
int main()
{
    int amt, n100, n50, n10;
    printf("Enter amount in hundreds: ");
    scanf("%d", &amt);
    n100 = amt / 100;
    amt = amt % 100;
    n50 = amt / 50;
    amt = amt % 50;
    n10 = amt / 10;
    printf("Number of 100 rupee notes: %d\n", n100);
    printf("Number of 50 rupee notes: %d\n", n50);
    printf("Number of 10 rupee notes: %d\n", n10);
    return 0;
}