#include <stdio.h>

int main() {
    FILE* fp;
    char mychar;
    
    fp = fopen("myfile.txt", "w");

    if (fp != NULL) {
        fputc('Y', fp);
        fputc('O', fp);
        fputc('K', fp);

        fclose(fp);
    }
    putchar('a');

    return 0;
}