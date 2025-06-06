#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
    char input[10];
    scanf("%9s", &input);

    char *output = (strcmp(input, "hi") == 0) ? "hi!" : "wha?";
    printf("output: %s\n", output);

    /* long way
    bool ds = (strcmp(input, "hi") == 0);
    if (ds) {
        printf("hi!\n");
    } else {
        printf("wha?\n");
    }
    */

    return 0;
}
