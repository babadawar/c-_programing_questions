#include <stdio.h>

int main() {
    float x1, y1, x2, y2, x3, y3;
    float slope1, slope2;

    printf("Enter the coordinates of the first point (x1 y1): ");
    scanf("%f %f", &x1, &y1);

    printf("Enter the coordinates of the second point (x2 y2): ");
    scanf("%f %f", &x2, &y2);

    printf("Enter the coordinates of the third point (x3 y3): ");
    scanf("%f %f", &x3, &y3);

    // Calculate the slopes between the points
    slope1 = (y2 - y1) / (x2 - x1);
    slope2 = (y3 - y2) / (x3 - x2);

    // Check if all three points fall on the same straight line
    if (slope1 == slope2) {
        printf("All three points fall on the same straight line.\n");
    } else {
        printf("The points do not fall on the same straight line.\n");
    }

    return 0;
}
