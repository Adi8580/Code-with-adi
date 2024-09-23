#include <stdio.h>

int main() {
    float x1, y1, x2, y2, x3, y3, area;
    printf("Enter coordinates of three vertices (x1, y1), (x2, y2), and (x3, y3)\n");
    scanf("%f %f %f %f %f %f", &x1, &y1, &x2, &y2, &x3, &y3);
    area = (x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2)) / 2.0;
    printf("Area of triangle : %0.4f\n", area);
    return 0;
}