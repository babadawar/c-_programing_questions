#include <stdio.h>

int main() {
    int number, firstDigit, lastDigit, sum;

    printf("Enter a four-digit number: ");
    scanf("%d", &number);

    // Extract the first digit
    firstDigit = number / 1000;

    // Extract the last digit
    lastDigit = number % 10;

    // Calculate the sum of the first and last digit
    sum = firstDigit + lastDigit;

    printf("Sum of the first and last digit: %d\n", sum);

    return 0;
}
