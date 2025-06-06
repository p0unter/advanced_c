#include <stdio.h>

int main() {
    #if defined(_WIN32) || defined(_WIN64)
        printf("This is Windows.\n");
    #elif defined(__linux__) || defined(__APPLE__)
        printf("This is Linux.\n");
    #else
        printf("This is MacOS or other operation systems.\n");
    #endif

    return 0;
}