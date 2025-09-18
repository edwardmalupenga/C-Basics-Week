#include <stdio.h>

int main() {
    
    float length, width, area;

    // Getting the length and width
    printf("Enter length of rectangle: ");
    scanf("%f", &length);
    printf("Enter width of rectangle: ");
    scanf("%f", &width);

    // Calculating the Area
    area = length * width;

    // Display the Area
    printf("Area of rectangle: %.2f\n", area);

    return 0;
}
