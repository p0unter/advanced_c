#include <stdio.h>

int main() {
    FILE* fp;
    puts("Hi guys");
    puts("My name is Pounter.");
    
    fp = fopen("myfile.txt", "w");

    if (fp != NULL) {
        fputs("Hi guys\n", fp);
        fputs("My name is Pounter.", fp);

        fclose(fp);
    }
    putchar('a');

    return 0;
}