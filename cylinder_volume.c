#include <stdio.h>

int main() {
    
    float radius, height, volume;
    const float PI = 3.14;

    // Getting the users input
    printf("Enter radius of cylinder: ");
    scanf("%f", &radius);
    printf("Enter height of cylinder: ");
    scanf("%f", &height);

    // solving the volume
    volume = PI * radius * radius * height;

    // show the volume of the cylinder
    printf("Volume of cylinder: %.2f\n", volume);

    return 0;
}
