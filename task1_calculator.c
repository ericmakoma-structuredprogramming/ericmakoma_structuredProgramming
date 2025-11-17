#include <stdio.h>

int main() {
    int x, y;

    printf("Enter number 1: ");
    scanf("%d", &x);

    printf("Enter number 2: ");
    scanf("%d", &y);

    printf("\n--- Results ---\n");
    printf("Addition: %d\n", x + y);
    printf("Subtraction: %d\n", x - y);
    printf("Multiplication: %d\n", x * y);
    printf("Division: %d\n", x / y);
    printf("Modulus: %d\n", x % y);

    return 0;
}
