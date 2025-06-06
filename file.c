#include <stdio.h>

int main() {
    FILE* fp;
    fp = fopen("myfile.txt", "w"); // type of operations: w - write, r - read, a - appending.

    if (fp == NULL) 
        printf("Openin file failed\n");
    else {
        printf("The file opened for writing.\n");
        fclose(fp);
    }

    return 0;
}