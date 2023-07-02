#include <stdio.h>

int main() {
    int number, reversedNumber = 0;

    printf("Enter a five-digit number: ");
    scanf("%d", &number);

    // Reverse the number
    reversedNumber = (number % 10) * 10000;  // Extract the last digit and place it in the first position
    number /= 10;                           // Remove the last digit

    reversedNumber += (number % 10) * 1000;  // Extract the next digit and place it in the second position
    number /= 10;                           // Remove the next digit

    reversedNumber += (number % 10) * 100;   // Extract the next digit and place it in the third position
    number /= 10;                           // Remove the next digit

    reversedNumber += (number % 10) * 10;    // Extract the next digit and place it in the fourth position
    number /= 10;                           // Remove the next digit

    reversedNumber += (number % 10) * 1;     // Extract the first digit and place it in the fifth position

    printf("The reversed number is: %d\n", reversedNumber);

    return 0;
}
