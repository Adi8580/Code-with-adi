#include <stdio.h>
#include <math.h>

void find_roots(float a, float b, float c) {
    float discriminant = b * b - 4 * a * c;
    float root1, root2;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("The roots are real and distinct: x1 = %f, x2 = %f\n", root1, root2);
    } else if (discriminant == 0) {
        root1 = -b / (2 * a);
        printf("The roots are real and equal: x = %f\n", root1);
    } else {
        float real_part = -b / (2 * a);
        float imag_part = sqrt(-discriminant) / (2 * a);
        printf("The roots are complex: x1 = %f + %fi, x2 = %f - %fi\n", real_part, imag_part, real_part, imag_part);
    }
}

int main() {
    float a, b, c;
    printf("Enter coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);
    find_roots(a, b, c);
    return 0;
}