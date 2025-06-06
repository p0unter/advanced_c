#include <stdio.h>
#include <stdlib.h>
#define SIZE 20

int main() {
    int *ptr;
    ptr = (int*) calloc(SIZE, sizeof(int));
    printf("%p\n", ptr);

    for (int i = 0; i <= SIZE; i++) {
        int *loc = ptr + i;
        printf("%p : %d\n", loc, *loc);
    }

    return 0;
}