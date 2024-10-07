#include <stdio.h>
#include <math.h>
#define PI 3.14159
int main() {
    float radius, surface_area;

    printf("Enter the radius of the hemisphere: ");
    scanf("%f", &radius);

    // calculate the surface area of the hemisphere
    surface_area = 3 * PI * radius * radius;
    printf("The surface area of the hemisphere is: %.2f\n", surface_area);
    return 0;
}