#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    
    // Input coefficients from the user
    printf("Enter the coefficients of the quadratic equation (a, b, c): ");
    scanf("%d %d %d", &a, &b, &c);

    int discriminant = b * b - 4 * a * c;
    
    // Switch case to find roots based on the discriminant
    switch (discriminant > 0) {
        case 1:
            printf("Two distinct real roots:\n");
            int root1 = (-b + sqrt(discriminant)) / (2 * a);
            int root2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("Root 1: %d\n", root1);
            printf("Root 2: %d\n", root2);
            break;
        case 0:
            switch (discriminant == 0) {
                case 1:
                    printf("One real root:\n");
                    int root = -b / (2 * a);
                    printf("Root: %d\n", root);
                    break;
                case 0:
                    printf("No real roots.\n");
                    break;
            }
            break;
    }

    return 0;
}
