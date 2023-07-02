#include <stdio.h>

int main() {
    float x, y;

    printf("Enter the coordinates of the point (x y): ");
    scanf("%f %f", &x, &y);

    if (x == 0 && y == 0) {
        printf("The point lies at the origin (0, 0).\n");
    } else if (x == 0) {
        printf("The point lies on the y-axis.\n");
    } else if (y == 0) {
        printf("The point lies on the x-axis.\n");
    } else {
        printf("The point does not lie on any axis.\n");
    }

    return 0;
}
