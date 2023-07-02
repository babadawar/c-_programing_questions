#include <stdio.h>

int main() {
    int population = 80000;
    float percentageMen = 52;
    float percentageLiteracy = 48;
    float percentageLiterateMen = 35;

    // Calculate the number of men
    int numMen = (percentageMen / 100) * population;

    // Calculate the number of literate men
    int numLiterateMen = (percentageLiterateMen / 100) * population;

    // Calculate the number of literate women
    int numLiterateWomen = (percentageLiteracy / 100) * population - numLiterateMen;

    // Calculate the number of illiterate men
    int numIlliterateMen = numMen - numLiterateMen;

    // Calculate the number of illiterate women
    int numIlliterateWomen = population - numMen - numLiterateWomen;

    printf("Number of illiterate men: %d\n", numIlliterateMen);
    printf("Number of illiterate women: %d\n", numIlliterateWomen);

    return 0;
}
