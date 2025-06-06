#include <stdio.h>
#include <stdlib.h>
#define SIZE 20

int main() {
    int *pointer;
    pointer = (int*) malloc(SIZE);
    printf("%p\n", pointer);

    for (int i = 0; i <= SIZE; i++) {
        int *loc = pointer + i;
        printf("%p : %d\n", loc, *loc);
    }
    
    return 0;
}