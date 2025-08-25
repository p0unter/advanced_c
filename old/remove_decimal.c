#include <stdio.h>

int main() {
    float input;
    printf("Enter the decimal number: ");
    scanf("%f", &input);

    printf("The Integer part: %d", (int)input);
    printf("The Decimal part (after the floating point) = %.2f\n", input - (int)input);

    return 0;
}