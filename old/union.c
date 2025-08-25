#include <stdio.h>

union Data {
    int i;
    float f;
};

int main() {
    union Data d;
    d.i = 10;
    printf("Integer: %d\n", d.i);

    d.f = 3.14f;
    printf("Float: %.2f\n", d.f);

    printf("Integer (after float): %d\n", d.i);

    return 0;
}
