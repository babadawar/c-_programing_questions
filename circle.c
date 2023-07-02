#include <stdio.h>
#include <math.h>

int main() {
    float centerX, centerY, radius;
    float pointX, pointY;
    float distance;

    printf("Enter the coordinates of the center of the circle (centerX centerY): ");
    scanf("%f %f", &centerX, &centerY);

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    printf("Enter the coordinates of the point (pointX pointY): ");
    scanf("%f %f", &pointX, &pointY);

    // Calculate the distance between the point and the center of the circle
    distance = sqrt(pow(pointX - centerX, 2) + pow(pointY - centerY, 2));

    // Check the position of the point relative to the circle
    if (distance < radius) {
        printf("The point lies inside the circle.\n");
    } else if (distance == radius) {
        printf("The point lies on the circle.\n");
    } else {
        printf("The point lies outside the circle.\n");
    }

    return 0;
}
