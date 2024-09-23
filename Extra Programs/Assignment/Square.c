#include <stdio.h>

void main() {
    float side, area;

    printf("Enter the length of the side of the square:\n");
    scanf("%f", &side);

    area = side * side;
    printf("Area of the square: %0.4f\n", area);
}