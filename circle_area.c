#include <stdio.h>

int main() {
    
    float radius, area;
    const float PI = 3.14;

    // Get the radius 
    printf("Enter radius of circle: ");
    scanf("%f", &radius);

    // Calculate the area
    area = PI * radius * radius;

    // Display the calculated area
    printf("Area of circle: %.2f\n", area);

    return 0;
}
