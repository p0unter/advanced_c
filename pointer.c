#include <stdio.h>

int main() {
    int a = 32;
    int *pointer;
    pointer = &a;
    printf("%d\n", *pointer);
    printf("%p\n", (void*)&pointer);

    int b = 33;
    int *pointer_1;
    pointer_1 = &b;

    int **pointer_2;
    pointer_2 = &pointer_1;

    int ***pointer_3;
    pointer_3 = &pointer_2;

    printf("%p %d\n", (void*)&pointer_3, ***pointer_3);

    return 0;
}
