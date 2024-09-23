#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, x2, y2, distance;
    printf("Enter coordinates (x1, y1) and (x2, y2)\n");
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("Distance between coordinates : %0.4f\n", distance);
    return 0;
}