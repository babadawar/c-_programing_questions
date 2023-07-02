#include <stdio.h>

int main() {
    int number, newNumber;

    printf("Enter a five-digit number: ");
    scanf("%d", &number);

    // Extract each digit, add one, and construct the new number
    newNumber = (number / 10000 + 1) * 10000 +
                ((number / 1000) % 10 + 1) * 1000 +
                ((number / 100) % 10 + 1) * 100 +
                ((number / 10) % 10 + 1) * 10 +
                (number % 10 + 1);

    printf("New number: %d\n", newNumber);

    return 0;
}
