#include <stdio.h>

int main() {
    double r, surface_area;
    const double PI = 3.14159;

    printf("Enter radius of the sphere: ");
    scanf("%lf", &r);

    surface_area = 4 * PI * r * r;

    printf("Surface area = %.2f\n", surface_area);

    return 0;
}
